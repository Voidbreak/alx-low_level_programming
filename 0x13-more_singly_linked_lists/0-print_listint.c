#include "lists.h"
/**
 * print_listint - prints all the elements of linked list
 * @j: linked list  type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->n);

		num++;
		j = j->next;
	}

	return (num);
}

