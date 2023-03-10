#include "main.h"
/**
 * _puts - prints newline after string
 * @s : points of string
 * Return: nouting
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
