#include "main.h"
/**
 * main - main point
 * Descrition: prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
