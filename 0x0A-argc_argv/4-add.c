#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	c = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!isdigit(argv[a][b]) && argv[a][0] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}

