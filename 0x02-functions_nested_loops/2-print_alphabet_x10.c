#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times alphabet
 *
 * Return: Alwways 0
 */
void print_alphabet_x10(void)
{
	char s;
	int d;

	for (d = 1; d <= 10; d++)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
