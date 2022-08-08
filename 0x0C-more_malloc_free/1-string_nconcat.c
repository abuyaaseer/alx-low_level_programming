#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*string_nconcat - concatenates two string
*@s1: parameter
*@s2: parameter
*@n: parameter
*Return: return s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;
	size = len1 + n;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	s[i] = '\0';

	return (s);
}
