#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Function that retunrs a node if it's insert else.
 * return NULL
 * @head: head of linked list.
 * @number: number to insert into a single linked list.
 * Return: a address of node if it's insert else NULL.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (current->n > new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (current->next->n >= new->n)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
