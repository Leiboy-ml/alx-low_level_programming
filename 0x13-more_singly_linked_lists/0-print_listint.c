#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements  if a listint_t list.
 * @h: A pointer to the had of the list_t list.
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t k = 0;
	
	while (h != NULL)

	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (k);
}
