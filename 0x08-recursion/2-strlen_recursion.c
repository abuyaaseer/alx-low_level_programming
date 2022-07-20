#include "main.h"

/**
* _strlen_recursion - to get the lenth of string using recursion
*@s: parameter
*Return: 0 or string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	return (1 +  _strlen_recursion(s + 1));
}
