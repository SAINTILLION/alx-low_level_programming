#include <stdio.h>

/**
 * main - prints all alphabet in lowercase except q and e
 * you can only use putchar function
 * Return: 0
 */

int main(void)
{
int lw = 'a';
while (lw = 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
