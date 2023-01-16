#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter of a string to uppercase
 * @n: character
 * Return: n
 */

char *string_toupper(char *n)
{
	int a;


	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - 32;
		}
		a++;
	}
	return (n);
}
