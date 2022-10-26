#include "lists.h"

/**
*sum_listint - sums all the data
*@head: head of the list
*Return: returns sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
