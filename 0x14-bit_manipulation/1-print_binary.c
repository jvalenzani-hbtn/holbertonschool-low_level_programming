# include "holberton.h"


void print_binary(unsigned long int n)
{
	unsigned long int div = 1;
	unsigned long int i = 0;
/*	unsigned long int max = (sizeof(n)*8); */
	
	printf("-> %lu\n", n);
	printf("MAX: %lu \n",(unsigned long int)(1<<31) );
	printf("MAX: %b \n",(1<<31) );
	for (i = 0; i < 32; i--)
	{
		printf("%lu\n", div);
		div *= 2;
	}
}
