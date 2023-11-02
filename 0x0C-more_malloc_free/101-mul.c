#include <stdlib.h>
#include <stdio.h>


/**
 * is_digit - checks if a string consists of only digits
 * @str: string checked
 *
 * Return: 1 if string consists of only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 Success, 98 Error
 */
int main(int argc, char *argv[])
{
	unsigned long int n1, n2, r;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	n1 = strtoul(argv[1], NULL, 10);
	n2 = strtoul(argv[2], NULL, 10);

	r = n1 * n2;

	printf("%lu\n", r);

	return (0);
}


