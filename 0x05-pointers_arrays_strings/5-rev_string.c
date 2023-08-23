#include "main.h"
#include <stdio.h>
/**
 * rev_string - reversing a string
 * @s : string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int r = 0;
	char j;

	for (i  = 0; s[i] != '\0'; i++)
		r++;
	for (i  = 0; i < r / 2; i++)
	{
		j = s[i];
		s[i] = s[r - 1 - i];
		s[r - 1 - i] = j;
	}
}
