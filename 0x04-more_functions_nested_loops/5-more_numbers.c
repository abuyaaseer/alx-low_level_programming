#include "main.h"

/**
*more_numbers - print numbers
*return: nothing
*/
void more_numbers(void)
{
	int num;
	int i;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i <= 10)
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
