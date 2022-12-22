#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: number to be checked
 * Return: 1 if n is positive, 0 if n is null, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
