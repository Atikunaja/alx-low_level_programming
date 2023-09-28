#include <stdio.h>
#include "main.h"
/**
 * _puts - Function that prints a string
 *  @str: string to be counted
 *  Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
}
