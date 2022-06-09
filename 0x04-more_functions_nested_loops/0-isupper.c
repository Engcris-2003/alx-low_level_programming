#include "main.h"
/**
 * _isupper - checks for uppercase, returns 1 0r 0
 * @c: character
 * Returns: 1 or 0 depending on condtion
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
