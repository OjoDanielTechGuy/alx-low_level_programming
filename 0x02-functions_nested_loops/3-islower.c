#include "main.h"
/**
 * is_lower - function that checks for lowercase character.
 * desc: Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Return: Always 0 (Success)
 */
int is_lower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
