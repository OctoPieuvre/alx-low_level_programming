#include "main.h"


/**
 * print_line - prints a straight line
 * @n: the length of the line
 * Return: void
 */


void print_line(int n)
{
	int f;


	if (n > 0)
	{
		for (f = 1; f <= n; f++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
