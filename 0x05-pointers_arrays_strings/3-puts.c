#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input character
 * Return: void
 */

void print_rev(char *s);
{
	int n = 0;

	while (n >= 0)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[n]);
		n++;
	}
}
