#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: is a single alphabet to check for alphabetic character
 * Return: 1 (Success) else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
