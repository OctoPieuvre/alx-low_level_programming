#include "main.h"


/**
 * print_diagonal - draws diagonal
 * @n: length of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;



	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
		}
	}
	else
	{
		_putchar('\n');
	}
}
