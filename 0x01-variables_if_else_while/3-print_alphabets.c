#include <stdio.h>
/**
 * main - A program that print the alphabet in lowercase and in uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char X;
	char Y;

	for (X = 'a'; X <= 'z'; X++)
	{
		putchar(X);
	}
	for (Y = 'A'; Y <= 'Z'; Y++)
	{
		putchar(Y);
	}

		putchar('\n');
		return (0);
}
