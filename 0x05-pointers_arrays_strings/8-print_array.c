#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * desc: Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the
 * same order as they are stored in the array
 * allowed to use printf
 * @n: is the number of elements of the array to be printed
 * @a: name of array
 * Return: number of elements in an integer array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
