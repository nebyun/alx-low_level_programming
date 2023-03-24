#include "variadic_functions.h"
/**
 * print_strings - a variadic function that prints a string
 * @separator: a string to be printed between a string
 * @n: Number of strings passed to function
 * if one of the strings is NULL print Nil
 * new line at the end
 * Return: string by separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	if (i == n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
