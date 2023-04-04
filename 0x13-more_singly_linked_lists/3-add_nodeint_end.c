#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to the address of the head of list.
 *
 *@n: The integer data in the new node
 *Return: If the funtion fails - NULL.
 *        else - address of the new element.
 *
 *
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));

		 if (new_node == NULL)
                	return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}

	return (*head);


}
