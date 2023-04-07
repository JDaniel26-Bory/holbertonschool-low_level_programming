#include "lists.h"

/**
 * get_dnodeint_at_index - get the node located in the given index.
 * @head: pointer to first node.
 * @index: index of the node to get.
 *
 * Return: pointer to node located in index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == 0)
return (0);
while (i < index)
{
if (head == 0)
return (0);
i++;
head = head->next;
}
return (head);
}
