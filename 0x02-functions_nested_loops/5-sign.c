#include "main.h"
/**
 * print_sign - check c
 * @n:checked
 * Return: 1 if positive or 0 if not and -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+1);
		return ('+');
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(-1);
		return ('-');
	}
}
