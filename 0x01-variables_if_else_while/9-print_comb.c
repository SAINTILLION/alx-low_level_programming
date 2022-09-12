#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{int d;
for (d = '0'; d <= '9'; d++)
{
if (d != '9')
{
putchar(d);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

