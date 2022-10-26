#include "lists.h"

/**
*free_listint - frees the list
*@head: head of the linked list
*Return: returns nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}

}
