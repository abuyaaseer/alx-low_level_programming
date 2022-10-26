#include "lists.h"

/**
*print_list - prints all element of a list
*@h: head
*Return: returns nothing
*
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		count++;
		h = h->link;
	}
}
