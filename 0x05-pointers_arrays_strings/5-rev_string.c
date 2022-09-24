#include "main.h"

/**
* rev_string - reverse string
* @s: parameter
* Return: nothing
*/
void rev_string(char *s)
{
	int i, l, ch;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[i] = ch;
	}

}
