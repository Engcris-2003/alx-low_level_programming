#include "main.h"
/**
 * _isupper - checks for uppercase, returns 1 0r 0
 * @c: character
 * Returns: 0 or 1
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
