#include <stdlib.h>
#include <lists.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = next_node;

	return (new_node);
}
