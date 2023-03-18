#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints Alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 48;
	int y = 97;

	while (x <= 57)
	{
		putchar(x);
		x = x + 1;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

