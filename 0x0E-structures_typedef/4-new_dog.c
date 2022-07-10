#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: newdog (dog_t *)
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;

	dog_t *n_dog; /*creates an instance of dpg_t*/
	/*Get length of stringname*/
	while (name[i] != '\0')
		i++;
	/* Get length of string owner*/
	while (owner[j] != '\0')
		j++;
	/*Reserve memory for dog_t instance*/
	n_dog = malloc(sizeof(dog_t));
	/**verify that malloc works*/
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	/*Reserve memory for member , name*/
	n_dog->name = malloc(i * sizeof(n_dog->name));
	/*verify malloc works*/
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	/*assign name*/
	for (k = 0; k <= i; k++)
		n_dog->name[k] = name[k];
	/*assign age*/
	n_dog->age = age;
	/*reserve memory for member , owner*/
	n_dog->owner = malloc(j * sizeof(n_dog->owner));
	/*verify malloc working*/
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	/*assign owner*/
	for (k = 0; k <= j; k++)
		n_dog->owner[k] = owner[k];
	return (n_dog);
}

