#include "main.h"

/**
 * times_table -  Prints the 9 times table, starting with 0
 * Return: empty ouput
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(44);
		_putchar(32);
		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(32);
		}
			_putchar((d % 10) + '0');
		if (c < 9)
		{
			_putchar(44);
			_putchar(32);
		}
	}
		_putchar('\n');
	}
}
