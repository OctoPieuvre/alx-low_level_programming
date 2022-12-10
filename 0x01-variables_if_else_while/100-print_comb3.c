#include <stdio.h>
/**
 * main - print combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int f, g;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
		for (g = 48; g < 58; g++)
		{
			if (g != f)
			{
				putchar(g);
			}
			if (f != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
