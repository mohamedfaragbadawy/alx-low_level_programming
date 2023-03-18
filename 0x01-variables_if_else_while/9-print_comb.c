#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints with printf function.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
