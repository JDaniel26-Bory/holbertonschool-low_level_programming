#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a double linked list.
 * @head: pointer to first node of the double linked list.
 * @n: integer number to store in the new node.
 *
 * Return: Address memory of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnodo;
newnodo = malloc(sizeof(dlistint_t));
if (!newnodo)
{
return (NULL);
}
newnodo->n = n;
if (!*head)
{
newnodo->prev = *head;
newnodo->next = *head;
*head = newnodo;
return (newnodo);
}
newnodo->prev = (*head)->prev;
newnodo->next = *head;
(*head)->prev = newnodo;
*head = newnodo;
return (newnodo);
}
