#include "main.h"

/**
*_puts_recursion - prints strings
*@s: parameter
*Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
{
	_putchar(*s);
}
	else
	_putchar('\n');
}
