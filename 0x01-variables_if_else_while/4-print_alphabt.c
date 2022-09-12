#include <stdio.h>

/**
 * main - program prints lowercase of alphabets except q and e
 * You can only  use putchar
 * Return: 0
 */

int  main(void)
{
int lw  = 'a';
while (lw <= 'z')
{
if (lw == 'q' || lw == 'e')
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
