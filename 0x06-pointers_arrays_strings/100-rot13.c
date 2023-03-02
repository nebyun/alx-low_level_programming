#include "main.h"
/**
 * rot13 - encode string using rot13
 * @s: string input
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *alpha1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alpha2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; alpha1[j] != '\0' ; j++)
		{
			if (s[i] == alpha1[j])
			{
				s[i] = alpha2[j];
				break;
			}
		}
	}
	return (s);
}
