#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of two numbers
 * @argc: counts the number of arguements
 * @argv: arrays of arguements
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
