#include "variadic_functions.h"
/**
 * print_numbers - a variadic function that prints numbers
 * followed by new line.
 * @separator: string to be printed between numbers
 * @n: number of intigers passed
 * if separator is NULL
 * dont print it
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*
	 * separator, n
	 */
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i == n-1)
			printf("\n");
		else
			printf("%s", separator);
	}
	va_end(ap);
}
