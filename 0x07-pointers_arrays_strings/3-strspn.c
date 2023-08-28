#include "main.h"
#include <stdio.h>
/**
 * _strspn - Get the length of a prefix substring
 * @s: string to search from
 * @accept: input
 * Return:number of characters matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
			return (s);
		}
	s++;
	}
	return ('\0');
}
