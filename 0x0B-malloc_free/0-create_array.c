#include "main.h"
#include <stdlib.h>
/**
 * create_array - A pointer that creates an array
 * @size: size of the array
 * @c: character to print
 * size == 0 return NULL
 * else pointer to the array
 * NULL if it fails
 *
 * Return: NULL or pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
	{
		str[i] = c;
	}
	return (str);
}
