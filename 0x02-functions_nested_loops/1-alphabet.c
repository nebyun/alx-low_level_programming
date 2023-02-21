#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Always 0 (Success)
 */
char print_alphabet(char c)
{
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
int main(void)
{
	char c = 'a';

	print_alphabet(c);
	return (0);
}
