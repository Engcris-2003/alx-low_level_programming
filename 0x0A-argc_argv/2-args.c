#include <stdio.h>
/**
 * main - main point
 * Description: prints all auguments it receives
 * @argv: array
 * @argc: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
