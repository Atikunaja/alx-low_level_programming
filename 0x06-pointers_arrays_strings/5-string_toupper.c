#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer to upper
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	(i = 0);
	while (n[i] != '\0')
	{
		(n[i] >= 'a' && n[i] <= 'z');

		n[i] = n[i] - 32;

			i++;
	}
	return (n);
}
