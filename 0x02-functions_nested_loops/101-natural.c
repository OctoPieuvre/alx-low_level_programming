#include <stdio.h>

/**
 * main - prints natural nimbers below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			b = b + a;
		}
	}
	printf("%d\n", b);
	return (0);
}
