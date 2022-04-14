#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: input
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0, number;

	va_start(valist, n);

	if (n == 0)
	{
		return (0);
	}

	for ( i = 0; i < n; i++)
	{
		number = va_arg(valist, int);
		sum = sum + number;
	}

	va_end(valist);
	return (sum);
}
