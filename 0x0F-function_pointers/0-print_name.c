#include <stdio.h>
#include "main.h"
/**
 * print_name - Prints name
 * @name: Pointer to name to print
 * @f: Pointer to function
 * that prints character string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

