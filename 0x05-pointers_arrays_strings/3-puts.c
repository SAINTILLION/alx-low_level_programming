#include "main.h"
/**
 * _puts - prints a string
 * @str: the str
 *
 * Return: the length of a str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
