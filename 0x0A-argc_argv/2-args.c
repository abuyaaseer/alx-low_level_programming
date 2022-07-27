#include <stdio.h>
/**
* main - prints all argument
* @argc: number of command line arguments
* @argv: array of all program in command line
* Return: returns 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
