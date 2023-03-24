#include "variadic_functions.h"
/**
 * sum_them_all - a variadic function that returns the
 * sum of intigers.
 * @n: numbers to be summed
 * Return: the sum of n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list params;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end(params);
	return (sum);
}

