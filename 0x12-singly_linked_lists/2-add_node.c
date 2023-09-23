#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Add a new node at the beginning
 * of a linked list
 * @head: head of the node
 * @str: string to add in the node
 * @len: length of a string
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;
	}
	return (*head);
}
