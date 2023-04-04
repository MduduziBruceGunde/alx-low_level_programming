#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
