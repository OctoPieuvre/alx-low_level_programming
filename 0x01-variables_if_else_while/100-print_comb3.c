#include <stdio.h>
/**
 * main - print combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int f = 48;
	int g = 48;

	while (f < 58)
	{
		g = 48;
		while (g < 58)
		{
			if (f != g && f < g)
			{
				putchar(f);
				putchar(g);
				if (f != 57 && g != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		g++;
		}
	f++;
	}
	putchar('\n');
	return (0);
}
