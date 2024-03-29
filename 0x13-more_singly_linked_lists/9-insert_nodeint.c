#include "lists.h"

/**
 * insert_nodeint_at_index - insterts a new node to listint_t in a given position.
 *
 * @head : pointer to the adress of the head node.
 *
 * @idx: the index where the node is being inserted.
 *
 * @n: the integer in the new node
 *
 * Return: Null on failture else retur adress of the new node.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;

	unsigned int nd;

	new = malloc(sizeof(listint_t));

	if (new ==NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (copy == NULL || copy->next ==  NULL)

			return (NULL);
		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
