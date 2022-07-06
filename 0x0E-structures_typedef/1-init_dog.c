#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: struct dog's member
 * @age: struct dog's member
 * @owner: struct dog's member
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
