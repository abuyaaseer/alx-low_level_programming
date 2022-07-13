#include "main.h"

/**
*print_rev - print string in reverse
*@s: parameter
*Return: nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[1] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	_putchar('\n');
	}
}
