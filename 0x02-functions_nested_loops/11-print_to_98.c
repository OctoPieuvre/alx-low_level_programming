#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number from input to 98
 * @n: the number to start from
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, n", n++);
		}
		printf("%d\n", n);
	}
}
