#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 concatenated
 *
 * Return: Success, pointer to concatenated string.
 * Failure, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, l1 = 0, l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	if (n >= l2)
	{
		n = l2;
	}

	c = malloc((l1 + n + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		c[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		c[i + j] = s2[j];
	}

	c[i + j] = '\0';

	return (c);
}

