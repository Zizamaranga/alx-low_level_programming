#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes from src
 * Return: pointer resulting to dest.
 */



char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
