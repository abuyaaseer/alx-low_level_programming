#include "main.h"

/**
*print_most_numbers - print numbers
*Return: nothing
*/
void print_most_numbers(void)
{
	int i = 0;

	while (0 < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
