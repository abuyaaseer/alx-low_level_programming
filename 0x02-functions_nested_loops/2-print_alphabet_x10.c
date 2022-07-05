#include "main.h"

/**
* print_alphabet_x10 - prints all alphabet x10
*
* return: nothing
*/
void print_alphabet_x10(void)
{
int i = 0;

while (0 < 10)
{
i++;

int ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

}
