#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints with printf function.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
