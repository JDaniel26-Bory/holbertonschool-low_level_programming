#include "lists.h"

/**
 * sum_dlistint - sum all data of a double linked list.
 * @head: pointer to first node.
 *
 * Return: sum all of data.
 */

int sum_dlistint(dlistint_t *head)
{
int plus = 0;
if (!head)
return (0);
while (head != NULL)
{
plus += head->n;
head = head->next;
}
return (plus);
}
