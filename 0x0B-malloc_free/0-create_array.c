#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *r;
	int i;

	r = malloc(size * sizeof(char));
	for(i = 0;i < size; i++)
	{
		r[i] = c;
	}
	return r;
}
