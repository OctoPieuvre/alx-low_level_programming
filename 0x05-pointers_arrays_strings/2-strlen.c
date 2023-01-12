#include "main.h"

/**
 * _strlen - length of strings
 * @s: input character
 * Return: result
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
