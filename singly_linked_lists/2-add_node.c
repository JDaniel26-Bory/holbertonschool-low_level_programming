#include "lists.h"
/**
 * add_node - add a new node at the beginning of the list_t list
 * @head: pointer to the first node
 * @str: entry string for new node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodo;

	newnodo = NULL;

	newnodo = malloc(sizeof(list_t));

	if (!newnodo)
	{
		return (NULL);
	}

	newnodo->str = strdup(str);
	newnodo->len = len_str(str);
	newnodo->next = *head;

	*head = newnodo;

	return (newnodo);
}
/**
 * len_str - find string length
 * @str: entry string
 * Return: string length
 */
int len_str(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
