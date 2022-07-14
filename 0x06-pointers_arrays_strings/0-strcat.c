#include "main.h"

/**
*_strcat - it append two strings
*@dest: parameter 1
*@src: parametr 2
*Return: return value to dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0'
	return (dest);
}
