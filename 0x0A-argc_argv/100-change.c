#include <stdio.h>
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
	int ce, co;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ce = atoi(argv[1]);

	if (ce < 0)
	{
		printf("0\n");
		return (0);
	}

	co = 0;

	while (ce >= 25)
	{
		ce -= 25;
		co++;
	}
	while (ce >= 10)
	{
		ce -= 10;
		co++;
	}
	while (ce >= 5)
	{
		ce -= 5;
		co++;
	}
	while (ce >= 2)
	{
		ce -= 2;
		co++;
	}
	while (ce >= 1)
	{
		ce -= 1;
		co++;
	}

	printf("%d\n", co);

	return (0);
}
