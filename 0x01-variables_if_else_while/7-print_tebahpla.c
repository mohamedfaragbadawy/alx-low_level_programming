#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints Alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

