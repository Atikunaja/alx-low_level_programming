#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * print_rev - Print a string in reverse
 * @s: character to print in reverse
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	char rev;

	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;

	}
	_putchar(s[i]);
}
