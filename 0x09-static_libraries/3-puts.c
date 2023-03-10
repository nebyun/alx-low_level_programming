#include "main.h"
/**
 * _puts - prints newline after string
 * @s : points of string
 * Return: nouting
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
