#include "main.h"
/**
 * more_numbers - check discription
 * Description : print numbers 0 up to 14, ten times
 * Return: no return value
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m > 9)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
