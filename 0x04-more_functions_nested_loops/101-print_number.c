#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
