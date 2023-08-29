#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		char *a = accept;
	while (*a)
	{
		if (*s == *a)
		{
			n++;
			break;
	}
	a++;
	}
	if (*a == '\0')
		break;
	s++;
	}
	return (s);
}
