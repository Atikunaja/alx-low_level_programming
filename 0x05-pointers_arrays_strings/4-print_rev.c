#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 * @s: character to print in reverse
 */
void print_rev(char *s)
{
	int a;
	int naja = 0;

	while (*s != ('\0'))
	{
		s++;
		naja++;
	}
	s--;
	for (a = naja; a > 0; a++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
