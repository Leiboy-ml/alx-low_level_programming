#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node ata agiven index
 *
 *@head: A pointer to the address head node.
 *
 *@index: the index to the node being deleted
 *
 *Return: 1 on success and 0 on failture
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *copy = *head;

	unsigned int nd;

	if (copy == NULL)
		return(-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;

	}

	ptr = copy->next;
	copy->next = ptr->next;
	free(ptr);
	
	return (1);

}
