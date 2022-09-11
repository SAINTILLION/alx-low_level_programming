#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{ int l = 'a';
while (l <= 'a')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
