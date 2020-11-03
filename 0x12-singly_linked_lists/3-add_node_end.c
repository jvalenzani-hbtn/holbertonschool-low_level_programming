#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add node at the end of the list.
 * @head: Pointer to pointer at List head
 * @str: String to copy to new node
 * Return: New pointer to node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *strcopy = strdup(str);
	list_t *newnode = malloc(sizeof(list_t));
	list_t *aux = *head;
	if (newnode != NULL)
	{
		newnode->str = strcopy;
		newnode->len = strlen(strcopy);
		newnode->next = NULL;
/*		list_t *aux = *head; */
		if(*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (aux->next)
			{
				aux = aux->next;
			}
			aux->next = newnode;
		}
	}
	return (newnode);
}
