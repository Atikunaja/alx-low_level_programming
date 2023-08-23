#include "main.h"
#include <stdio.h>
/**
 * print_rev - A function that print a string in reverse
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;

	while (start > end)
	{
		int top = start;

		start = end;
		end = top;
		start++;
		end++;
	}
}
