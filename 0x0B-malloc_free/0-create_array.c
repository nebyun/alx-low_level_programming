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
	unsigned int i, j;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		for (i = 1; i <= 10; i++)
		{
			for (j = 1; j <= 10; j++)
			{
				if (i * j <= size)
				{
					str = malloc(sizeof(c) * size);
					return (str);
				}
				else
					return (NULL);
			}
		}
	}
	return (0);
}
