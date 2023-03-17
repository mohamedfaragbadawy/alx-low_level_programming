#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints alphabets.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 97;
	int y = 65;

	while (x >= 97 && x <= 122)
	{
		putchar(x);
	}
	putchar('\n');
	while (y >= 65 && y <= 90)
	{
		putchar(y);
	}
	return (0);
}
