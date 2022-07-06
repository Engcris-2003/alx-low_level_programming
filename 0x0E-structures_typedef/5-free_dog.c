#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: pointer to dog_h
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
