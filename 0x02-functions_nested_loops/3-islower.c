#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * @c: is a single alphabet that is inserted to check the function
 * desc: Returns 1 if c is lowercase, else 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
