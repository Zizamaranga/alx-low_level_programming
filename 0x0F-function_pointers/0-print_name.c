#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to the name to be printed
 * @f: Pointer to a function that prints a character string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * print_name_as_is - Prints a name as is
 * @name: Name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase
 * @name: Name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
	unsigned int i = 0;

	printf("Hello, my uppercase name is ");
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}


