#include "main.h"
/**
 * prime_a - prime number
 * @a: input
 * @b: divisor
 * Return: 1 if its an int otherwise 0
 */
int prime_a(int a, int b)
{
	if
		(a <= 1 || (a != b && a % b == 0))
	{
			return (0);
	}
	if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - detects if its a prime number
 * @n: input
 * Return: 1 if its an integer otherwise 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
