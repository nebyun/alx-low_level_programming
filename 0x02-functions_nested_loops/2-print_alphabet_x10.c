#include "main.h"
/**
 * print_alphabet_x10 - check discription
 * Discription: It prints letter in lowercase ten times
 * Return: Nouting
 */
void print_alphabet_x10(void)
{
	/*initialize the letter*/
	char letter;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
