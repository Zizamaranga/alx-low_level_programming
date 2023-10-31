#include <stdlib.h>

/**
 * _strdup - returns a pointer
 *
 * @str: the string duplicated
 *
 * Return: Success, a pointer to the duplicated string else null
 *
 */
char *_strdup(char *str)
{
	char *d;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	d = malloc(sizeof(char) * (len + 1));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		d[i] = str[i];
	}

	d[len] = '\0';

	return (d);
}

