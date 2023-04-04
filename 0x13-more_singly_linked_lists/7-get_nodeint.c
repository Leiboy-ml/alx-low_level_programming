#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node in listint_t
 *
 * @head: a pointer to the head of listint_t
 *
 * @index: the index of the node to locate 
 *
 * Return: if node dose not exist - NULL
 *		else - the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

		for (j = 0; j<index; j++)
		{
			if(head == NULL)
				return (NULL);

			head = head->next;

		}

	return (head);
}
