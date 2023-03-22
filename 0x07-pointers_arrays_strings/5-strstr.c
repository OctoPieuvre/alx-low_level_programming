#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string a
 * @needle: string b
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;
		
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
