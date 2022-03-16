#include <stdlib.h>
#include "main.h"
/**
 * _abs -  function that computes the absolute value of an integer
 * @abs: receives an integer
 * Return: absolute value of integer abs
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		abs = (-1) * abs;
	}
	else
	{
		abs = abs;
	}

	return (abs);

}
