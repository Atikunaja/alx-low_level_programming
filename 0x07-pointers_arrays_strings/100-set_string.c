#include "main.h"
#include <stdio.h>
/**
 * set_string  - Set the value of a pointer to a character
 * @s : pointer to a pointer
 * @to: pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
