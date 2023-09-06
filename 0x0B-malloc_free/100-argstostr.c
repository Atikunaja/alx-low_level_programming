#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all program arguments
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the array of char
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int i, j, k, l;

	if (ac == 0 || av == NULL) 
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	for (n = 0; av[i][n]; n++)
	{
		aout[k] = av[i][n];
		k++;
	}
	if (str[k] == '\0')
	{
		aout[k++] = '\n';
	}
	return (str);
}
