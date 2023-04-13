#include "search_algos.h"

/**
  * jump_search - Searches for a value in an array using jump search
  * @array: array
  * @size: size of array.
  * @value: The value to search for.
  *
  * Return: success
  */
int jump_search(int *array, size_t size, int value)
{
	size_t a, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		a = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; a < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", a, array[i]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
