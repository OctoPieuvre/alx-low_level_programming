#include <stdio.h>
/**
 * main - print base 16 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int d;
	char c;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
