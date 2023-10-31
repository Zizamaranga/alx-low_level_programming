#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Success, a pointer to the concatenated string.
 *
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, t = 0, in = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t++;
		t++;
	}

	c = malloc((t + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c[in] = av[i][j];
			in++;
		}
		c[in] = '\n';
		in++;
	}
	c[in] = '\0';

	return (c);
}

