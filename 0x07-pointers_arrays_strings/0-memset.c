#include "main.h"
#include <string.h>
/**
 * _memset -  function that fills memory with a constant byte
 * @s: character
 * @b: constant byte
 * @n: size
 * Return: returns a pointer to area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
