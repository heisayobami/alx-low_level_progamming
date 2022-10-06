#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
  * _calloc - allocates memory for an initialized buffer
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
