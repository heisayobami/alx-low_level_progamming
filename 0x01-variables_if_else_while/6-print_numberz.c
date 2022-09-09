#include <stdio.h>
/**
 * main - Prints numbers 0-9 without char or printf/puts
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
