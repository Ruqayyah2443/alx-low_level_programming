#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Print a function that that returns the
* sum of all its paramters.
* @n: Number of paramters passed into the function.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: 0 if successful
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
