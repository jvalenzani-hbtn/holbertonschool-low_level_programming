#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *r = NULL;
	unsigned int i;

	if (size > 0)
	{
		r = malloc(size * sizeof(char));
		if (r != NULL)
		{
			for (i = 0; i < size; i++)
			{
				r[i] = c;
			}
		}
	}
	return (r);
}
