#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
