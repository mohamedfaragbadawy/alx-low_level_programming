#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that the size of various types on the computer.
 *
 * Return: Always 0 (success000)
*/

int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("isze of an int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
