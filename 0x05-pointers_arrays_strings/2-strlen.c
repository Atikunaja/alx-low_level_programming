#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string to be counted
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	return (len);
}
