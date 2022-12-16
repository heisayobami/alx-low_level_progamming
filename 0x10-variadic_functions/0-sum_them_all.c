#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameter;
	unsigned int i, sum = 0;

	va_start(parameter, n);
	
	if (n == 0)
		{ return 0; }

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameter, int);
	}

	va_end(parameter);

	return sum;
}
