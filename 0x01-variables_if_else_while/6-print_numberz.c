#include <stdio.h>

/**
 * main - prints all the single digits numbers starting from 0
 * You are only allowed to use putchar twice
 * Return: 0
 */

int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
putchar('\n');
}
return (0);
}
