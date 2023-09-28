#include "main.h"
#include <stdio.h>

/**
 * _strchr - Get the length of a prefix substring
 * @s: string to search from
 * @c: character to search in s
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
