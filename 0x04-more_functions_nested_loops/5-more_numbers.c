#include "main.h"


/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: void
 */


void more_numbers(void)
{
	int n, d;


	for (n = 0; n < 10; n++)
	{
		for (d = 0; d < 15; d++)
		{
			_putchar(d + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
