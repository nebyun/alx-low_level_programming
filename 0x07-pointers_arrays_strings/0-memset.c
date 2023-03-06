#include "main.h"
/**
 * _memset - function that fills memory with constant bytes.
 * @s: character pointer
 * @b: charactor variable
 * @n: integer variable
 * Return: two dimentional array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
