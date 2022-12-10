#include <stdio.h>
/**
 * main - print combination of three digit
 *
 * Return: Always 0
 */
int main(void)
{
	int f = 48;
	int g = 48;
	int e = 48;

	while (f < 58)
	{
		g = 48;
		while (g < 58)
		{
			e = 48;
			while (e < 58)
			{
				if (f != g && g != e && f != e && f < g && g < e)
				{
					putchar(f);
					putchar(g);
					putchar(e);
					if (f != 57 && f != 57 && f != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			e++;
			}
		g++;
		}
	f++;
	}
	putchar('\n');
	return(0);
}
