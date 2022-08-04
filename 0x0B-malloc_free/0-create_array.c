#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of char
*@size: parameter
*@c: parameter
*Return: returns ch
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
