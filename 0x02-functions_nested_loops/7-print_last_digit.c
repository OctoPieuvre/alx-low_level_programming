#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @f: number to be checked
 * Return: value of the last digit
 */

int print_last_digit(int f)
{
	int d = f % 10;

	if (d < 0)
	{
		d = -d;
	}
	_putchar('0' + d);
	return (d);
}
