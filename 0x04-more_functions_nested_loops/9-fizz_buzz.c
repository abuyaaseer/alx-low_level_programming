#include <stdio.h>

/**
* main - entry point
*
* Return: zero
*/
int main(void)
{
	int i = 1;

	printf("%d ", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		printf("fizzBuzz");

		else if (i % 5 == 0)
		printf("Buzz");

		else if (i % 3 == 0)
		printf("Fizz");

		else
		printf("%d", i);

		if (i != 101)
		printf(" ");
	}
	return (0);
}
