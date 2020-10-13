#include <stdio.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *r;
	r = malloc(n * sizeof(char));
	r[0] = c;
	return r;
}
