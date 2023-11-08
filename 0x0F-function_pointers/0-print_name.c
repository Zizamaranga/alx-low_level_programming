#include "function_pointers.h"


/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

/**
 * print_elem - Prints an integer
 * @elem: The integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
	/* Convert integer to string manually */
	if (elem < 0)
	{
		_putchar('-');
		elem *= -1;
	}
	if (elem / 10)
	{
		print_elem(elem / 10);
	}
	_putchar(elem % 10 + '0');
}

/**
 * print_elem_hex - Prints an integer in hexadecimal
 * @elem: The integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
	int temp;
	_putchar('0');
	_putchar('x');
	if (elem == 0)
	{
		_putchar('0');
		return;
	}
	while (elem != 0)
	{
		temp = elem % 16;
		elem /= 16;
		if (temp < 10)
			_putchar(temp + '0');
		else
			_putchar(temp - 10 + 'a');
	}
}



