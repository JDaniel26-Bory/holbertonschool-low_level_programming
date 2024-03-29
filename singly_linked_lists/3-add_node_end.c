#include "lists.h"

/**
 * add_node_end - Add new node in the end of the linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 * Return: pointer of the new node added to linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->str = strdup(str);
	new->len = len_str(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
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

