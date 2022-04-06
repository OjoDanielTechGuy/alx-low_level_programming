#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count number of arguements
 * @argv: array of strings
 * Return: all arguements
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
