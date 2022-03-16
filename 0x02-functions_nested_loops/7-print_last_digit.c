#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @ld: this variable recives an integer
 * desc: Returns the value of the last digit
 * Return: pld (Success)
 */
int print_last_digit(int ld)
{
	int pld;

	pld = (ld % 10);

	_putchar(pld + '0');

	return (pld);
}
