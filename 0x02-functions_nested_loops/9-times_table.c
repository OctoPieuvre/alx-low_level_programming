#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: Noting
 */
void times_table(void)
{
	int c, d, e;

	for (c = 0; c < 10; c++)
	{

		for (d = 0; d < 10; d++)
		{
			e = c * d;
			_putchar(',');
			_putchar(' ');
			if (e < 10)
			{
				_putchar(' ');
				_putchar(e + '0');
			}
			else
			{
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
