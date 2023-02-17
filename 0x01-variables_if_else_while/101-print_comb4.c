#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int int1, int2, int3;

	for (int1 = 0 ; int1 < 8 ; int1++)
	{
		for (int2 = 0 ; int2 < 9 ; int2++)
		{
			for (int3 = 0 ; int3 < 10 ; int3++)
			if (int1 < int2 && int2 < int3 && int1 != int2 && int2 != int3)
			{
				putchar(int1 % 10 + '0');
				putchar(int2 % 10 + '0');
				putchar(int3 % 10 + '0');
			if (int1 + int2 + int3 != 24)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
