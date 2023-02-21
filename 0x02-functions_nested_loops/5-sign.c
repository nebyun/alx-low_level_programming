#include "main.h"
/**
 * print_sign - check c
 * @n:checked
 * Return: 1 if positive or 0 if not and -1 if neg
 */
int print_sign(int n)
{
	int ps;

	if (n > 0)
	{
		ps = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ps = 0;
		_putchar(0);
	}
	else
	{
		ps = -1;
		_putchar('-');
	}
	return (ps);

}
