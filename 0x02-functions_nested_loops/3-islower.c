#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: character too be checked
  * Return: 1 for lower case character or 0 for anything else
  */

int _islower(int c)
{
	if (c>= 'a' && c <= 'z')
	{
		return (1);
	}
	
	return (0);
}
