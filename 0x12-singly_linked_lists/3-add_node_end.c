#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list.
 * @head: head of the linked list.
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t cha;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cha = 0; str[cha]; cha++)
		;

	new->len = cha;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
