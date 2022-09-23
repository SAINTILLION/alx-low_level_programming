#include "main.h"

/**
 * rot13 - comverts string to leet
 *
 * @c: character string pointter
 * Return: char pointer
 */

char *rot13(char *c)
{
	int i, j;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; j++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
