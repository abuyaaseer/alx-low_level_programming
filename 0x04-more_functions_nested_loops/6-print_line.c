#include "main.h"

/**
*print_line - print straight line
*@n: parameter
*Return: nothing
*/
void print_line(int n)
{
	int m = '_';

	if (n > 0)
	_putchar(n * ('0' + m));
	else
	_putchar('\n');

}
