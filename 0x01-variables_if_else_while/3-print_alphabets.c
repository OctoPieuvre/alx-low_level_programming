#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: Always (0)
 */

int main(void)
{
	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;


	for (i = 0; i < 52; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
