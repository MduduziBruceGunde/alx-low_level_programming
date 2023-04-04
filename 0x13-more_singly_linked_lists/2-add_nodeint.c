#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the first node of the list
 * @n: Integer value to be stored in the new node
 * Return: The new address of the pointer, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = head;
	*head = new;


	return (new);
}
