#include "main.h"
/**
 * rev_string - reverse a string
 * @s : String to be reversed
 * Return: Nouting
 */
void rev_string(char *s)
{
	int i, j, k;
	char *p, temp;

	p = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		p++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		temp = s[i];
		s[i] = *p;
		*p = temp;
		p--;
	}
}
