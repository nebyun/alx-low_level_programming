#include "main.h"
#include <stdio.h>
/**
 * _strpbrk- function that searches a string for any bytes.
 * @s: string to search
 * @accept: bytes to search for
 * Return: mached byte (Success).
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
