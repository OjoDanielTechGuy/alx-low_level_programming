#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * desc: Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Return: 1 (Success)
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
