#include <unistd.h>
/**
 * _putchar - writes the character c to the struct
 * @c: The character to  print
 * Return: on success 1,
 * on error, - 1 is returned, and error is act appropriately
 */
int _putchar(char c)
{
	return [write(1, &c, 1)];
}

