#include "main.h"

/**
 * prime_check - checks recursively the input from is_prime_number
 * @q: factor check
 * @r: number to check
 * Return: 1 if prime, otherwise 0
 */

int prime_check(int q, int r)
{
	if (r < 2 || r % q == 0)
		return (0);
	else if (q > r / 2)
		return (1);
	else
		return (prime_check(q + 1, r));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
