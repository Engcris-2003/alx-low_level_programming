#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints characters
 * @arg: auguments
 * Return: nothing
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints integers
 * @arg: argument
 * Return: nothing
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}
/**
 * print_float - prints all floats
 * @arg: argument
 * Return: nothing
 */
void print_float(va_list arg)
{
	float j;

	j = va_arg(arg, double);
	printf("%f", j);
}
/**
 * print_string - prints string
 * @arg: argument
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything followed by a new line
 * @format: list of types of arguments passed to the function
 * @...: variadic functions
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;

	char *separator " ";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
