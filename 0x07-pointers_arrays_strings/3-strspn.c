#include "main.h"
/**
 * _strspn- function that gets length of substring.
 * @s: string pointer
 * @accept: character pointer
 * Return: 0 (Success).
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0 ; accept[j] != '\0' ; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
