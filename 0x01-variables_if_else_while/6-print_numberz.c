#include <stdio.h>

/**
 * main - prints all the single digits numbers starting from 0
 * You are only allowed to use putchar twice
 * Return: 0
 */

int main(void)
{
int n;
n = 0;
while (n < 10)
{
putchar(n);
n += 1;
}
putchar('\n');
return (0);
}
