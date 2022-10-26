#include "lists.h"

/**
*free_listint2 - frees the list
*@head: head of the linked list
*Return: returns nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head != NULL)
	{
		temp = *head;
		while ((ptr = temp) != NULL)
		{
			ptr = ptr->next;
			free(ptr);
		}
		*head = NULL;
	}
}
