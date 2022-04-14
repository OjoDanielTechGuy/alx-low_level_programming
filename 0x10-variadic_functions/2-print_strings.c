#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * @separator: strings between strings
 * @n: no of strings passed to function
 * Return: if separator == NULL return void or
 * if a string == NULL print nil
 */
void print_strings(const char * separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	if (separator == NULL)
	{
		return
	}

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
