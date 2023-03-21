#include <stdio.h>
/**
 * _memset - fill a memory with a constant byte
 * @b: constant byte
 * @s: memory area
 * @n: bytes filled
 * Return: the pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
