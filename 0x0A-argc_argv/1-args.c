#include <stdio.h>
/**
 * main - main point
 * Description: prints nummber of auguments passed
 * @argv: argument vector
 * @argc: integer
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
