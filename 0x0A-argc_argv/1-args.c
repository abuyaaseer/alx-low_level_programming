#include <stdio.h>

/**
* main - prints the number of arguments
* @argc: number of command line argument
* @argv: array that contain the programs in the command line argument
* Return: returns
*/
int main(int argc, char *argv[])
{
	(void)argv[0];
	printf("%d\n", argc);

	return (0);
}
