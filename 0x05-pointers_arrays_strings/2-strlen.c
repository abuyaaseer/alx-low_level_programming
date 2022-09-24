#include "main.h"

/**
*_strlen - to check the lenth of a string
*@s: parameter
*Return: lenth of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
