#include "main.h"
/**
 * *string_toupper - changes letters to uppercase
 *
 * @str: string to be modified
 * Return: Modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}

