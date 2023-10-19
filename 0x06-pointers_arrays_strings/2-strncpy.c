#include "main.h"
/**
 * *_strncpy - copy a string
 * @dest: Destination string
 * @src: Source string
 * @n: maximum number of bytes to copy
 * Return: dest always.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0';)
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
