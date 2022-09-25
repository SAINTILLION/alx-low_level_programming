#include <stdio.h>
#include "main.h"
/**
 * main - programs that prints number
 * or fizz or buzz or fizzbuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int a = 1;
	int i;

	printf("%d", a);
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
