#include <stdio.h>

/**
 * main - progrram prints the letters of the alphabet in reverse
 * You can only use putchar once
 * Return: 0
 */

int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
{
putchar(low);
}
putchar('\n');
return (0);
}
