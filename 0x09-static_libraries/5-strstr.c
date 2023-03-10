#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate a substring function.
 * @haystack: string to search
 * @needle: string to search for.
 * Return: NULL if not found, else a pointer of substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0 ; needle[i] ; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
