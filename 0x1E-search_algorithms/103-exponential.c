#include "search_algos.h"

/**
  * _binary_search - Searches for a value in an array
  *                  of integers using binary search.
  * @array: parameter.
  * @left: parameter.
  * @right: parameter.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t b;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (b = left; b < right; b++)
			printf("%d, ", array[b]);
		printf("%d\n", array[b]);

		b = left + (right - left) / 2;
		if (array[b] == value)
			return (b);
		if (array[b] > value)
			right = b - 1;
		else
			left = b + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in an array using exponential search.
  * @array: parameter.
  * @size: size of array.
  * @value: The value to search for.
  *
  * Return: If value is not present or array is NULL -1.
  *         else, the index where the value is.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	right = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, right);
	return (_binary_search(array, a / 2, right, value));
}
