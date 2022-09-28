#include "main.h"

/**
 * sqrt_check - checks for the square root of q
 * @q: guess at sqrt
 * @r: number to find sqrt of
 * Return: -1 or square root of q
 */
int sqrt_check(int q, int r)
{
	if (q * q == r)
		return (q);
	if (q * q > r)
		return (-1);
	return (sqrt_check(q + 1, r));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * Return: the natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
