#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n whenever its executed
 * if the number is greater than zero, its prints number greater Zero
 * if the number is less than Zero, its print number less than Zero
 * else its print number is Zero
 * Return: 0
 */


int main(void)  /* This function contains code to be executed*/
{ int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{ printf("%d is positive\n", n); }
else if (n < 0)
{ printf("%d is negative\n", n); }
else
{ printf("%d is zero\n", n); }
return (0);
}

