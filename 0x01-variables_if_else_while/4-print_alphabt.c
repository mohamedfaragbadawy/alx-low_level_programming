#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints with printf function.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 97;

	while (x >= 97 && x <= 122 && x != 101 && x != 113)
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}
