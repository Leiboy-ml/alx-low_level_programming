#include "lists.h"

/**
 * free_listint2 - frees a lists Listint_t
 *
 * @head: A pointer to the first node of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head->next;
			free(*head);
			*head = ptr;

	}

	head = NULL;
}
