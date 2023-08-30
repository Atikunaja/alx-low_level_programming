#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of a number
 * @n: input
 * Return:  1 or -1
 */
int factorial(int n)
{
	if (n <= 1)
	{
		_putchar(n *factorial(n - 1));
		return (1);
	}
	else
	return (-1);
}

