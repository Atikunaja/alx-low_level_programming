#include "main.h"
/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */
void print_binary(unsigned long int n)
{
	int a, m = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
		new = m >> a;
		if (new & 1)
		{
			_putchar('1');
			m++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
