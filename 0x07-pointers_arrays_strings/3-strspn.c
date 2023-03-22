#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: checker
 * Return: an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count =0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count = count + 1;
				break;
			}
		}
		if (!*p)
		{
			break;
		}
		s++;
	
	}
	return (count);
}
