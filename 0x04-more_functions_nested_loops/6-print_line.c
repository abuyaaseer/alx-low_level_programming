#include "main.h"

/**
*print_line - print straight line
*@n: parameter
*Return: nothing
*/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
		_putchar('\n');

	if (n <= 0)
	_putchar('\n');
	}

}
