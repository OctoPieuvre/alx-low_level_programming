#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: the number times table
 * Return: no return
 */

void print_times_table(int n)
{
	int c, d, op;

	if (n <= 15 && n >= 0)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');
			for (d = 1; d <= n; d++)
			{
				op = c * d;
				_putchar(',');
				_putchar(' ');
				if (op <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(op + '0');
				}
				else if (op <= 99)
				{
					_putchar(' ');
					_putchar((op / 10) + '0');
					_putchar((op % 10) + '0');
				}
				else
				{
					_putchar(((op / 100) % 10) + '0');
					_putchar(((op / 10) % 10) + '0');
					_putchar((op % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
