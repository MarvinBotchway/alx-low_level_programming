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
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		printf("Unable to assign memory.");
		return (NULL);
	}
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
