#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints lowercase letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
