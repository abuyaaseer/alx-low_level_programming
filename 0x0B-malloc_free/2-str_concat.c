#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*str_concat - concatinate two strings
*@s1: parameter
*@s2: parameter
*Return: return
*/
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, size;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;
	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[i + len1] = s2[i];
	s[size - 1] = '\0';

	return (s);
}
