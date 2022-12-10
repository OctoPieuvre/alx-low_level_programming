#include <stdio.h>
/**
 * main - Prints alphabet expect e and q
 *
 * Return: Always (0)
 */
int main(void)
{
	char f = 'a';

	while(f <= 'z')
	{
		if (f != 'e' && f != 'q')
		{
			putchar(f);
		}
		f++;
	}
	putchar('\n');
	return (0);
}
