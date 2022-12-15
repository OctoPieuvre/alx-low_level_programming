#include "main.h"
/**
 * _islower - Prints lower alphabet
 *
 * return: 1if c is a lower otherwise 0
 */
int _islower(int c)
{
	char c;
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
