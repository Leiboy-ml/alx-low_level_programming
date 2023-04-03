#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Prints all the elements  if a listint_t list.
 * @head: A pointer to the had of the list_t list.
 *
 * @a: data value in the new node
 *
 * Return: null if function fails else return adreddof the ne element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (current == NULL)

		return (NULL);

	current->n = a;
	current->next = *head;

		*head = current;
	return (current);
}
