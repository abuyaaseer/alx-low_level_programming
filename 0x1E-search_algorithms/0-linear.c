#include "search_algos.h"

/**
 * linear_search - searches for a value
 * @array: parameter
 * @size: size of the array
 * @value: parameter
 * Return: return success
 */
int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[i]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}
