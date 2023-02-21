#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[7] = "_putchar";
	int i;

	for (i = 0 ; i <= 7 ; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
