#include "main.h"
#include <string.h>
/**
 * char *_strncpy -  function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: parameter
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (0);
}
