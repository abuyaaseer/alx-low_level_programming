#include <stdio.h>

/**
* main - entry point
*
* Return: Always (0)
*/
int main(void)
{
	long int n1 = 1, n2 = 2, n3;
	int count = 48;

	printf("%ld, %ld", n1, n2);
	while (count)
	{
		n3 = n1 + n2;
		printf(", %ld", n3);
		n1 = n2;
		n2 = n3;
		count = count - 1;
	}
	return (0);
}
