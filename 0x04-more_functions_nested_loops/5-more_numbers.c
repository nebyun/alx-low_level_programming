#include "main.h"
/**
 * more_numbers - check discription
 * Description : print numbers 0 up to 14, ten times
 * Return: no return value
 */
void more_numbers(void)
{
	int n, m;

	n = 0;
	while (n < 10)
	{
		m = 0;
		while (m < 15)
		{
			if (m < 10)
			{
				_putchar(m % 10 + '0');
				m++;
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				m++;
			}
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
