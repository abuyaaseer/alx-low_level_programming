#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using Interpolation search algorithm
 * @array: array
 * @size: size of array
 * @value: value
 * Return: position of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		a = (size_t)(low + f);
		printf("Value checked array[%d]", (int)a);

		if (a >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[a]);
		}

		if (array[pos] == value)
			return ((int)a);

		if (array[a] < value)
			low = a + 1;
		else
			high = a - 1;

		if (low == high)
			break;
	}

	return (-1);
}
