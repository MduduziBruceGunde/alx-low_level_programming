#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i;

if (!head)
return (NULL);

new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

if (idx == 0)
{
new->next = *head;

*head = new;

return (new);
}

temp = *head;

for (i = 0; temp && i < idx - 1; i++)
temp = tempt->next;

if (i != idx - 1)
{
free(new);
return (NULL);
}

new->next = temp->next;

temp->next = new;

return (new);
}



