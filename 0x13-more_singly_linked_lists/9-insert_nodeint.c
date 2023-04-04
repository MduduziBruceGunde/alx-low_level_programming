#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * , at a given location
 * @head: pointer to the first node in the list
 * @idx: index where we are supposed to add a new node
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *pre_node = NULL, *current_node = *head;
	unsigned int x = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (current_node && x < idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		x++;
	}
	if (x == idx)
	{
		if (prev_node)
			prev_node->next = next_node;
		else
			*head = new_node;
		new_node->next = current_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
