#include "main.h"
/**
 * _isupper - function that checks for a digit (0 through 9)
 * @c: represent digit
 * Return: 1 if c is digit otherwise 0
 */
int _isupper(int c)
{
	if (c > 37 && c < 48)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
