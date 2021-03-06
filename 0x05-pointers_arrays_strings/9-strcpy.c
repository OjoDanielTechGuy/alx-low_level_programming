#include "main.h"
/**
 * _strcpy - Entry Point
 * des: function that copies the string pointed to by src
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *  @dest: copy to buffer
 *  @src: copy from pointer src
 *  Return: String Value
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}

	return (dest);
}
