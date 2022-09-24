#include "main.h"

/**
* _strcpy - copies string
* @dest: parameter
* @src: parameter
* Return: returns dest
*
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
