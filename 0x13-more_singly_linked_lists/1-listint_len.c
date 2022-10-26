#include "lists.h"

/**
*listint_len - returns the number of elements
*@h: linked list
*Return: returns count
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
