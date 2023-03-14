#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check discription
 * discription: a function that concatinates two strings
 * @s1: string one
 * @s2: String two a string that is appended to s2
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	/*declaration */
	int index, c_index = 0, length = 0;
	char *concatinated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		length++;
	concatinated = malloc(sizeof(char) * length);
	if (concatinated == 0)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		concatinated[c_index++] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		concatinated[c_index++] = s2[index];
		index++;
	}
	return (concatinated);
}
