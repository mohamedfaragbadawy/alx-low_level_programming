#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints Alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 97;

	while (x >= 97 && x <= 122)
	{
		putchar(x);
		x = x + 1;
	}
	return (0);
}

