#include <stdio.h>
#include "main.h"

/**
 * print_array - Print an array up to n
 * @a: array name
 * @n: the number of elements of the array
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
