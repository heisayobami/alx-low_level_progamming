#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First value to swap
 * @b: Second value to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
