#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (FAIL)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *next = (*head)->next
			;
		free(*head);
		*head = next;

		return (1);
	}

	listint_t *current = *head;

	for (unsigned int i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}

		current = current->next;

	}
	listint_t *next = current->next->next;

	free(current->next);

	current->next = next;

	return (1);
}
