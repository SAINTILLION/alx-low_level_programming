#include "main.h"
/**
 * _isalpha -function tp check if c is a lowercase or uppercase
 * @c: argument to be used
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
