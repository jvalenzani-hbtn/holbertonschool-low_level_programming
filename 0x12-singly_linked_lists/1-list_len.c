# include "lists.h"

/**
 * list_len - Prints a single linked list
 * @h: list node
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	int nodeCount = 0;

	if (h == NULL)
	{
		return (nodeCount);
	}
	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
