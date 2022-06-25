#include <stdio.h>
#include "main.h"
/**
 * main - main point
 * Description: prints it's name
 * @argv: argument vector
 * @argc: argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
