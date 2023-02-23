#include "main.h"
/**
 * print_line - check
 * @n : print n number of times
 * Return: no return value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
