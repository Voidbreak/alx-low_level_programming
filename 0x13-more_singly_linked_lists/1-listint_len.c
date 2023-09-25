#include "lists.h"

/**
 * custom_listint_len - returns the number of elements in a linked list
 * @list: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t custom_listint_len(const listint_t *list)
{
	size_t count = 0;

	while (list)
	{
		count++;
		list = list->next;
	}

	return (count);
}

