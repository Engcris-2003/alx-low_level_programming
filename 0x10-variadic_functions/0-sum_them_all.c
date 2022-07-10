#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum of all its parameter
 * @n: number of parameters passed to the function
 * @...: variadic parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
