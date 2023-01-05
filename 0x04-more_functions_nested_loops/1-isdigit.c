#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 * Return: 1 if c is a digit, Otherwise 0
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
