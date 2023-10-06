#include <stdio.h>

/**
 * main - entry point of the program
 *
 *Description - printing size of types on the computer it is run on.
 *
 *Return: Always return 0 (success)
 */

int main(void)
{

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
