#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list miListaDeCosas;
	unsigned int i;
	int sum = 0;

	if (n > 0)
	{
		va_start(miListaDeCosas, n);
		for(i = 0; i < n; i++)
		{
			sum += va_arg(miListaDeCosas, int);
		}
		va_end(miListaDeCosas);
	}
	return sum;
}
