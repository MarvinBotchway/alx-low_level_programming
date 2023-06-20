#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Creates a new dog.
 * @name: The dogs name.
 * @age: The dogs age.
 * @owner: The dogs owner.
 * Return: A pointer the new dog if sucessfull otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int i, nlen, olen;

	i = nlen = olen = 0;

	newdog = malloc(sizeof(dog_t *));
	if (newdog == NULL)
	{
		printf("Unable to assign memory.");
		free(newdog);
		return (NULL);
	}

	while (name[nlen] != '\0')
		nlen++;
	while (owner[olen] != '\0')
		olen++;
	newdog->name = malloc(sizeof(char) * (nlen + 1));
	newdog->owner = malloc(sizeof(char) * (olen + 1));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		printf("Unable to assign memory");
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= nlen; i++)
		newdog->name[i] = name[i];
	newdog->age = age;
	for (i = 0; i <= olen; i++)
		newdog->owner[i] = owner[i];

	return (newdog);
}
