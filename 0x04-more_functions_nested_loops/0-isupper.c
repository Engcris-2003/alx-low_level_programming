#include "main.h"
/**
 * _isupper - checks for uppercase, returns 1 0r 0
 * @c: character
 * Return: 0 or 1 depending on condition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
