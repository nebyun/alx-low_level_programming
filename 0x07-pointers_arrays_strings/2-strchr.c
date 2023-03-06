#include "main.h"
#include <stdio.h>
/**
 * _strchr- function that locate character in a string.
 * @s: string pointer
 * @c: character
 * Return: display found character.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		}
	if (c == *s)
		return (s);
	return (NULL);
}
