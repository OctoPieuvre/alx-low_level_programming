#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int op = 0;


	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
	{
		op = *s1 - *s2;
	}
	return (op);
}
