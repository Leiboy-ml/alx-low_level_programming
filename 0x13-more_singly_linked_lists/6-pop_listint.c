#include "lists.h"

/**
 *pop_listint - deletes the head node of the list
 *@head: points to the address of the head
 *Return: 0 if the lis is empty
 *	else return the data in the head node
 *
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr
		int x;
	if (head == NULL)
		return (0);

	ptr = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(ptr);

	return (x);
}
