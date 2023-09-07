#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * cg_free_grid - Entry point
 * @grid: address of the grid
 * @height: height of the grid
 */
void cg_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);

		free(grid);
	}
}
/**
 * strtow - splits string into two
 * @str: string with words to be splitted
 * Return: a pointer to new allocated memory for the string
 */
char **strtow(char *str)
{

	char **aout;
	size_t c, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc(height + 1) *sizeof(char *);
	}
		if (aout == NULL)
		{
			free(aout);
			return (NULL);
		}
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i];   malloc((c - al + 2) * sizeof(char));
				if (aout[i] == NULL)
				{	
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
			for (j = 0; al <= c; al++, j++)
				aout[i][j] = str[al];
			aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
