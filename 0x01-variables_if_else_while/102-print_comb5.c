#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int int1, int2;

	for (int1 = 0 ; int1 <= 98 ; int1++)
	{
		for (int2 = int1 + 1 ; int2 <= 99 ; int2++)
		{
			putchar((int1 / 10) + '0');
			putchar((int2 % 10) + '0');
			putchar(' ');
			putchar((int2 / 10) + '0');
			putchar((int2 % 10) + '0');
			if (int1 == 98 && int2 == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
