#include "main.h"
/**
 * string_nconcat - a function that concatinates two strings.
 * @s1: string one
 * @s2: string two that is going to be concatinated
 * @n:number of character
 * Return: Concatinated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		length++;
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
		return (NULL);
	length = 0;
	for (index = 0; s1[index]; index++)
		concat[length++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concat[length++] = s2[index];
	concat[length] = '\0';
	return (concat);
}
