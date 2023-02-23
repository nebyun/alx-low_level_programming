#include "main.h"
/**
 * print_most_numbers - check discription
 * Description : print numbers 0 up to 9 not 2 and 4
 * Return: no return value
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n == 2 || n == 4)
			n++;
		_putchar(n % 10 + '0');
		n++;
	}
	_putchar('\n');
}
