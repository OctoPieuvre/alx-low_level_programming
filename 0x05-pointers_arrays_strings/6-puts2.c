#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;

	while (n >= 0)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
}
