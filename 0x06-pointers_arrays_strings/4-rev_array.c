#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	char temp;
	for (*(n + i) != '\0')
	{
		i++;
	}
		i--;
	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}
