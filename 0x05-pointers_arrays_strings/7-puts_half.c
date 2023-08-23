#include "main.h"
/**
 * puts_half - print half of string
 * @str: parameter to be printed
 */
void puts_half(char *str)
{
	int i, j, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	j = (count - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++);
		putchar(str[i]);
	putchar('\n');
}
