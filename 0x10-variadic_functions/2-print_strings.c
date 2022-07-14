#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variadic parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)")'
		else
			printf("%s, str");
		if (str != (n - 1) && separartor != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
