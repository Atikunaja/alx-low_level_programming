#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two numbers
 * @n1: text representation of 1st number to add
 * @n2: representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow, i, j, digits = 0;
	int val1, val2, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;

	while (*(n2 + j) != '\0')
		j++;
		i--;

	if  (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	if (i < 0)
		val 1 = 0;
	else
		val 1 = *(n1 + i) - '0';

	if (j < 0)
		val 2  = 0;
	else
		val 2 = *(n2 + j) - '0';
	temp_tot = val 1 + val 2 + overflow;
	if (temp_tot >= 10)
		overflow = 1;
	else
		overflow = 0;
	if (digits >= (size_r - 1))
		return (0);
	*(r + digits) = (temp_tot %  10) + '0';
		digits++;
		j++;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
