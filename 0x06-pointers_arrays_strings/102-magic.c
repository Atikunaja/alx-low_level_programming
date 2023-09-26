#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/**
 * main - Entry point
 * @P: pointer
 * @a: array
 * @n: parameter
 * Return: void
 */
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
