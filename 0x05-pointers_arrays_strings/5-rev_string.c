#include "main.h"
/**
 * rev_string: function that reverses a string.
 * @s - accepts character
 * Return: a string in reverse
 */
void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int fcounter = 0;

	while (s[fcounter] != '\0')
	{
		fcounter++;
	}
	
	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
