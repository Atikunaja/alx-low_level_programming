#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoder rot13
 * @s: pointer to string param
 *
 * Return: *s
 */

char *rot13(char *)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j]
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}


