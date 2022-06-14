#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: character
 */
void puts_half(char *str)
{
	int i, len, y;

	len = strlen(str);
	if (len % 2 == 0)
		y = len / 2 + 1;
	else
		y = len / 2;
	for (i = y; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
