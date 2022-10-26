#include "lists.h"

/**
*add_nodeint - adds a new node at the end
*@head: head of the linked list
*@n: integer
*Return: returns head
*/
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new, *temp;

	new = malloc(sizeof(listin_t));

	if (new == NULL)
		return (NULL);

	new->n = n
	new->next = NULL;

	temp = *head;
	if (head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
