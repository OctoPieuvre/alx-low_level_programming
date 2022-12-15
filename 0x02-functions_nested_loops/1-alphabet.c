#include "main.h"
/**
 * print_alphabet - Prints alphabet lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
