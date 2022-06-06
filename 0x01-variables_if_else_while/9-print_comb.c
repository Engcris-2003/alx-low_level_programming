#include <stdio.h>
/**
 * main - main point
 * Description: prints a single digit
 *
 * Return: 0
 */
int main(void)
{
	int num1;

	for (num1 = '0'; num1 <= '9', num1++)
		putchar(num1);
	putchar(',');
	putchar(' ');

	putchar('\n');
	return (0);
}

