#include "main.h"
/**
 * _islower - Prints lower alphabet
 * @c : the character to be checked
 * Return: 1 if c is a lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
