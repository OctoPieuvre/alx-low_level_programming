#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - write a function that print the chessboard
 * @a: input
 * Return: 0
 */

void print_chessboqrd(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
