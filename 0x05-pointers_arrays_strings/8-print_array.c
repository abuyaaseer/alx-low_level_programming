#include "main.h"

/**
* print_array - prints n element of an array
* @a: parameter
* @n: parameter
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
