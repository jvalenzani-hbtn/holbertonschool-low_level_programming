# include "lists.h"

/**
 * print_list - Prints a single linked list
 * @h: list node
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nodeCount = 0;

	if (h == NULL)
	{
		return (nodeCount);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		/*	printStr(h->str, h->len);*/
		}
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
