#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string.
 * @src: source string.
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
