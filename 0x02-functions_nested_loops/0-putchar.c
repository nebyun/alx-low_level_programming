#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0 ; i <= 7 ; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
