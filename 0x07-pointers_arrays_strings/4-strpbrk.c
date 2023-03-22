#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searching a string
 * @s: string
 * @accept: checker
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
