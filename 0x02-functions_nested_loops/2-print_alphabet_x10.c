#include "main.h"

/**
* print_alphabet_x10 - prints all alphabet x10
*
* return: nothing
*/
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; 'a' <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
