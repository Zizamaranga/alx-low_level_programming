#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: pointer to the memory area
 * @src: pointer to the memory area to copy from
 * @n: number of bytes copied
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
