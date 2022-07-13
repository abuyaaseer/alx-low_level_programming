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
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
