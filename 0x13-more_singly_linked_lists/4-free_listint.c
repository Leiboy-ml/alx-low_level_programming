#include "lists.h"

/**
 * free_listint - frees a list listint_t.
 * @head: a pointer to the head of the listint_t 
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
