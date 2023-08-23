#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 * @s: character to print in reverse
 */
void print_rev(char *s)
{
	int i;
	int naja = 0;

	for (i = 0; s[i] != '\0'; i++)
		naja++;
	for (i = naja - 1; ( i = 0); i--)
		_putchar(s[i]);
	_putchar('\n');
}
