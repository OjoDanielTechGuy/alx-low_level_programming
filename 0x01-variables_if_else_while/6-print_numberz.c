#include <stdio.h>
/**
 * main - Entry Point
 * desc: program that prints all single digit of 10 starting from 0
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * You can only use putchar twice
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
