#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A C program that prints with printf function.
 * Return: Always 0 (success000)
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, x);
	}
	if (x < 6 && x != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
