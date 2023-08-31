#include "main.h"
/**
 * _sqrt_a - the natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: square root or -1
 */
int _sqrt_a(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
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
