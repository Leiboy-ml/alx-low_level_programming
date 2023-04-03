#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints all the elements  if a listint_t list.
 * @h: A pointer to the had of the list_t list.
 *
 * Return: The number elements in the list_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++
		h = h->next;
	}

	return (j);
}
