#include "main.h"
/**
 * _islower - function to check for lowercaase character
 *
 * @c: argumet of the function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
