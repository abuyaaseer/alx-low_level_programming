#include <stdio.h>

/**
* main - entry point
*
* Return: Always (0)
*/
int main(void)
{
	int n1 = 1, n2 = 2, n3, count = 48;

	printf("%d, %d", n1, n2);
	while (count)
	{
		n3 = n1 + n2;
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
		count--;
	}
	return (0);
}
