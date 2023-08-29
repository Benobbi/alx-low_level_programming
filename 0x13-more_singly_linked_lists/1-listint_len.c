#include "lists.h"
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list to check
 *
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

