#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: character to be checked
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
