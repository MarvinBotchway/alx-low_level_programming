#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - A new type struct dog
 * @name: The dogs name.
 * @age: The dogs age.
 * @owner: The dogs owner.
 * Description: Stores information of a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*_DOG_H*/