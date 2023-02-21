#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
