#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastn = n % 10;
if (lastn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else
{
printf("Last digit of %d is %d and is lees than 6 and not 0\n", n, lastn);
}

return (0);
}
