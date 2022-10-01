#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: number to be computed
  * Return: Absolute value of number or zero
  */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
