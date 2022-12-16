#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);
	if (n!=0)
	{
	for (i = 0; i < n; i++)
	{sum += va_arg(ap, int);}
	}
	else
		return (0);
	va_end(ap);

	return (sum);
}
