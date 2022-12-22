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
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
