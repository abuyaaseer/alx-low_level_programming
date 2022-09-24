#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: parameter
* Return: nothing
*/
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;
	for (i / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
