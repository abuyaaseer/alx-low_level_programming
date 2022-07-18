#include "main.h"

/**
*_strchr - checks for a character in a string
*@s: parameter
*@c: parameter
*Return: returns string or null
*/
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;

	for (j = 0; j < i; j++)
	{
		if (j == s[c])
			return (s);
		else
			return ('\0');
	}

}

