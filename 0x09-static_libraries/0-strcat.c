#include "main.h"
#include <string.h>
/**
 * _strcat - concatinates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
