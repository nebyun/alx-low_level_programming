#include "main.h"
#include <string.h>
/**
 * _strncat - concatinates two strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes from source
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
