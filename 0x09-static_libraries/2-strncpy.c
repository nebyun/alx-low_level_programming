#include "main.h"
/**
 * _strncpy - copys strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes from source
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for ( ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
