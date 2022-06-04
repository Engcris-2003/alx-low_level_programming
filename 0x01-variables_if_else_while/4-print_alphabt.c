#include <stdio.h>
/**
 * main - main block
 * Description: prints lowercase letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	}
	putchar('\n');

	return (0);
}
