#include "main.h"

/**
*_memcpy - copies memory area
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i > n ; i++)
		dest[i] = src[i];

	return (dest);
}
