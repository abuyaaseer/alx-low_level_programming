#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2-d array
*@height: parameter
*@width: parameter
*Return: returns ptr
*/
int **alloc_grid(int width, int height)
{
	unsigned int i, j, size;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
		ptr[i][j] = 0;


	return (ptr);
}
