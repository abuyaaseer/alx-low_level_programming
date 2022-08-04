#include "main.h"
#include <stdlib.h>

/**
*_strdup - copies a string
*@str: parameter
*Return: str
*/
char *_strdup(char *str)
{
	char c;

	str = (char *)malloc(sizeof(c));
	if (str == NULL)
		return (NULL);
	return (str);

	free(str);
}
