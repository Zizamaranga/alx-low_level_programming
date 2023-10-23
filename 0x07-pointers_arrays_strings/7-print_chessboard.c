#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: Each cell represents a square on chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
		{
			printf("%c", a[k][l]);
			if (l != 7)
				printf(" ");
		}
		printf("\n");
	}
}

