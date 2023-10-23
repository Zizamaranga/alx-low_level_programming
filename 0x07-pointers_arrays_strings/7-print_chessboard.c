#include "main.h"

/**
 * print_chessboard - Prints chessboard
 * @a: The chessboard printed
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
		{
			if (l != 0)
				_putchar(' ');
			_putchar(a[k][l]);
		}
		_putchar('\n');
	}
}


