#include "main.h"
#include <string.h>
/**
 * char *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: parameter
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
