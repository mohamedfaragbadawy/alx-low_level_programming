#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints with printf function.
 * Return: Always 0 (success000)
*/
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 103)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
