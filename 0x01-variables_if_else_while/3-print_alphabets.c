#include <stdio.h>

/**
 * main - program prints the alphabet in lowercase then in uppercase
 * You can only the putchar twice
 * Return: 0
 */

int main(void)
{
int lower, upper;
lower = 'a';
upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower += 1;
}
while (upper <= 'Z')
{
putchar(upper);
upper += 1;
}
putchar('\n');
return (0);
}
