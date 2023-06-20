#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: The struct dog.
 * @name: The dogs name.
 * @age: The dogs age.
 * @owner: The dogs owner.
 * Return: (void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
