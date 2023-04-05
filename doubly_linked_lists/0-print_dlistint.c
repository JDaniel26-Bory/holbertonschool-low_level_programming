#include "lists.h"
/**
* print_dlistint - print all the elements of a dlistint_t list
* @h: head of the list
* Return: number_nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int n_nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
n_nodes++;
}
return (n_nodes);
}
