#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * desc: The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src and
 * src does not need to be null-terminated
 * @dest: string
 * @src: number of bytes
 * @n: represent iterations
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int a;
    int b;

    a = 0;

    while (dest[a] != 0)
    {
        a++;
    }

    b = 0;

    while (src[b] != 0 && b < n)
    {
        dest[a] = src[b];
        a++;
        b++;
    }

    return (dest);
}
