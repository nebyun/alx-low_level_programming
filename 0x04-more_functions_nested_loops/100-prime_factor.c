#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long p, d;

	p = 612852475143;
	while (d < (p / 2))
	{
		if((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for(d = 3 ; d < (p /2) ; d += 2)
		{
			if ((p % d ) == 0)
				p /= d;
		}
	}
	printf("%ld\n", p);
		return (0);
}
