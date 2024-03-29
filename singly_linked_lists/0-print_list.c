#include "lists.h"
/**
 * print_list - print the elements of the list_t list.
 * @h: the start of the list (head).
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
int nodes = 0;
while (h)
{
if (!h->str)
{
printf("[0] (nil)\n");
h = h->next;
nodes++;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nodes++;
}
}
return (nodes);
}
