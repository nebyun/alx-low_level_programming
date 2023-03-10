#include "main.h"
/**
 * _memcpy- function that copies memory areas constant bytes.
 * @dest: destination pointer
 * @src: source pointer
 * @n: integer variable
 * Return: copied two dimentional array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
