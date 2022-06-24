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

	for (num1 = 48 num1 < 58; num1++)
	{
		putchar(num1);
		if (num1 != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

