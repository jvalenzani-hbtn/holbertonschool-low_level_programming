#include "lists.h"
#include <string.h>

/**
 * add_node - check the code for Holberton School students.
 * @head: Pointer to pointer at List head
 * @str: String to copy to new node
 * Return: New pointer to node.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strcopy = strdup(str);
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode != NULL)
	{
		newnode->str = strcopy;
		newnode->len = strlen(strcopy);
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
