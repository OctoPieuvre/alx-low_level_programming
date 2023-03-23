#include <stdio.h>
#include "main.h"

/**
 * set_string - sets a value of a pinter to a char
 * @s: the pointer
 * @to: the character
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
