#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * for the newley allocated space.
 * @str: String pointer.
 * new string
 * which is duplicate of string.
 * malloc
 * Null if insufficent memory
 * Return: pointer str
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int index, length;

	if (str == 0)
		return (NULL);
	for (index = 0; str[index]; index++)
		length++;
	copy = malloc(sizeof(char) * length + 1);/* add 1 to include '\0'*/
	if (copy == 0)
		return (NULL);
	index = 0;
	while (str[index])
	{
		copy[index] = str[index];
		index++;
	}
	copy[length] = '\0';
	return (copy);
}
