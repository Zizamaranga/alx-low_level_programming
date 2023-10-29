#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: 0 successful, 1 error
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}

