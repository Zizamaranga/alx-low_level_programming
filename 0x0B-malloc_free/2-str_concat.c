#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Success, a pointer to concatenated string else null
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0, j = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s2[l2] != '\0')
		l2++;
	while (s1[l1] != '\0')
		l1++;

	c = malloc((l1 + l2 + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
		c[i] = s1[i];

	for (j = 0; j < l2; j++)
		c[i + j] = s2[j];

	c[i + j] = '\0';

	return (c);
}

