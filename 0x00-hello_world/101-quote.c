#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(1, "and that piece of art is useful\"", 32);
	write(1, " - Dora Korpar, 2015-10-19", 26);
	return (0);
}