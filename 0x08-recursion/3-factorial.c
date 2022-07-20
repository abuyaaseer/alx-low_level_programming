#include "main.h"

/**
*factorial - to calculate factorial
*@n: parameter
*Return: -1 or factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
