#include "lists.h"

/**
*add_nodeint - adds new node at the beginning
*@head: head of the linked list
*@n: integer
*Return: returns head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (*head);
}
