#include "main.h"
/**
 * puts_half - display the second half of string
 * @str : String to be displayed
 * Return: Nouting
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n += 1;
	}
	for (i = n; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
