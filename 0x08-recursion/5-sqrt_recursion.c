#include "main.h"
/**
 * _sqrt_a - the natural square root of a number
 * @a: input number
 * @n: iterator
 * Return: square root or -1
 */
int _sqrt_a(int n)
{
	if (n * n == a)
		return (n);
	else if (n * n > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - Sqrt root of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
