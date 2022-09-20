#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	while (i >= 0)
	{
		*(s + i) = *(str + i);
		j++;
		i--;
	}
}
