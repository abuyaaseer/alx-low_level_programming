#include "main.h"

/**
*_pow_recursion - to calculate raise to power using recursion
*@x: parameter
*@y"parameter
*Return: return -1 or raise to power value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x ^ _pow_recursion(y -1));

}
