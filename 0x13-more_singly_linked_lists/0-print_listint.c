#include "lists.h"

/**
*listint_len - prints all element
*@h: the node
*Return: returns count
*/
size_t print_listint(const listint_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                printf("%d", h->n);
                count++;
                h = h->next;
        }
        return (count);
}
