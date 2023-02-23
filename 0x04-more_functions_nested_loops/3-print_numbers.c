#include "main.h"
/**
 * print_numbers - check discription
 * Description : print numbers 0 up to 9
 * Return: no return value
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n % 10 + '0');
		n++;
	}
	_putchar('\n');
}
