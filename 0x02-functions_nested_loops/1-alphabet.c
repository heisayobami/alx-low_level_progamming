#include "main.h"
/**
 * print_alphabet - prints the alphabets jn lowercase
 * followed by a new line
 * Return: Always void
 */
void print_alphabet(void)
{
	int x;
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
}
