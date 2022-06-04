#include <stdio.h>
/**
 * main - main block
 * Description: prints numbers to base 16
 *
 * Return: 0
 */
int main(void)
{
	char numeric;

	for (numeric = '0'; numeric <= '9'; numeric++)
		putchar(numeric);
	for (numeric = 'a'; numeric <= 'f'; numeric++)
		putchar(numeric);
	putchar('\n');
	return (0);
}
