#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: destination string
 * @src: source string
 * @n: string
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
