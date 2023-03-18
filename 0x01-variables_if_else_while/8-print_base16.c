#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints Alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 1;

	while (x <= 15)
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}

