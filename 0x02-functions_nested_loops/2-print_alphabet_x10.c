#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times alphabet
 *
 * Return: Alwways 0
 */
void print_alphabet_x10(void)
{
	char s = 'a';
	int d;

	for (d = 0, d < 10, d++)
	{
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
	}
}
