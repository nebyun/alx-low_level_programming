#include "main.h"
/**
 * _strlen_recursion - read discription
 * discription: recursive function that counts number
 * of charactors
 * @s: charactor pointer
 * Return: Nouting
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		count = count + _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
