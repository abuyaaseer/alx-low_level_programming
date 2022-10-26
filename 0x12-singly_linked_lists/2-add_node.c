#include "lists.h"

/**
*add_node - add a new node at the beginning
*@head: parameter
*@str: parameter
*Return: returns head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new->len = count;
	new->next = *head;
	*head = new;
	return (*head);
}
