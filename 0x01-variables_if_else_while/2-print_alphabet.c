#include <stdio.h>

/**
 * main - Prints alphabet
 *
 * Return: Always (0)
 */

int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;


	for (i = 0; i < 26; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
