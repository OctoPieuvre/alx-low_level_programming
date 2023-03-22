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
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = count + 1;
				break;
			}
		}
	}
	return (count);
}
