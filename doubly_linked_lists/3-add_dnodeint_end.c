#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a double linked list
 * @head: pointer to first node of the double linked list
 * @n: number to store in the new node.
 *
 * Return: address memory of the new node added.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *newnodo;
newnodo = malloc(sizeof(dlistint_t));
if (!newnodo)
{
return (NULL);
}
newnodo->n = n;
tmp = *head;
if (!*head)
{
newnodo->prev = *head;
newnodo->next = *head;
*head = newnodo;
return (newnodo);
}
for (; tmp->next != NULL; tmp = tmp->next)
{}
newnodo->next = tmp->next;
newnodo->prev = tmp;
tmp->next = newnodo;
return (newnodo);
}
