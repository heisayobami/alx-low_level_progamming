#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: input string to print
 * Return: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
