#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ui = 0;
	int m = 1;
	int sn = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			sn = 1;
			ui = (ui * 10) + (s[c] - '0');
			c++;
		}

		if (sn == 1)
		{
			break;
		}

		c++;
	}

	ui *= m;
	return (ui);
}
