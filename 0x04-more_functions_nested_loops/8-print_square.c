#include "main.h"

/**
*print_square - prints square
*@size: parameter
*Return: nothing
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}

		if (size <= 0)
		_putchar('\n');
	}
	_putchar('\n');

}
