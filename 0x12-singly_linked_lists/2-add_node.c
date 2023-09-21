#include "lists.h"

/**
 * add_node - Add node at the beginning
 * @head: head of the node
 * str: string to store
 * Return: address of new element or null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t);
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdep(str);
	for (i = 0; str[i] != '\0'; i++)
		count++
}
