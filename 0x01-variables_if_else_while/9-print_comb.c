#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int a = 0;

while (a < 10)
{
putchar('0' + a);
a++;
if (a != 5)
putchar(',');
}
putchar('\n');
return (0);
}

