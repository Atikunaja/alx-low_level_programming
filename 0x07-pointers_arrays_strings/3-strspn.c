#include "main.h"
#include <stdio.h>
/**
 * _strspn.c - Get the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * Return:number of characters matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
