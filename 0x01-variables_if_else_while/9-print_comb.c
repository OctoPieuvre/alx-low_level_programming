#include <stdio.h>
/**
 * main - combination of digits
 *
 * Return: Alwys (0)
 */
int main(void)
{
	int f;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
		if (f != 57);
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
