#include "main.h"

/**
 *
 *description: It prints the alphabet in lowercase fallowed by a new line
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
