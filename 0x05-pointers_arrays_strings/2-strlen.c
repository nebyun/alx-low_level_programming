#include "main.h"
/**
 * _strlen - return size of string
 * @s : points to length of string
 * Return: the value of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
