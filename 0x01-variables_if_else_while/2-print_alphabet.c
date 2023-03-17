#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints Alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 97;

	if (x >= 97 && x <= 122)
	{
		putchar(x);
		putchar('\n');
		x = x + 1;
	}
	return (0);
}

