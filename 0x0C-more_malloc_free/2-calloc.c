#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate a memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	x = mem;
	for (i = 0; i < (size * nmemb); i++)
	{
		x[i] = '\0';
	}
	return (mem);
}
