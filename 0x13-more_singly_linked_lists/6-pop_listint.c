#include "lists.h"

/**
 * pop_listint - Erase the head node of a linked list
 * @head: double pointer to the first component in the linked list
 *
 * Return: data inside the components that was erased
 * , or O if the list is empty
 */

int pop_listint(listint_t **head)
{
	int fig;
	listint_t *temp;

	if (!*head || !head)
		return (0);

	fig = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (fig);
}
