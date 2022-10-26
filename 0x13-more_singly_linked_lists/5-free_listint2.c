#include "lists.h"

/**
*free_listint2 - frees the list
*@head: head of the linked list
*Return: returns nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	*head = NULL;

}
