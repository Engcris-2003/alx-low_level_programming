#include "main.h"
/**
 * _memset -  function that sets memory
 * @s: pointer to the block of memory
 * @b: value to be set
 * @n: number of bytes
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
