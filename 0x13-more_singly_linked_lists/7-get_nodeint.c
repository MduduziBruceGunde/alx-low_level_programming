#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to be returned, starting at 0.
 *
 * Return: pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int c = 0;

	while (current != NULL && c < index)
	{
		current = current->next;
		c++;
	}

	if (c == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
