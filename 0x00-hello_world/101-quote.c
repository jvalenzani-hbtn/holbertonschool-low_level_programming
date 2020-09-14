#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\"", 32);
	write(1, " - Dora Korpar, 2015-10-19\n", 27);
	return (0);
}
