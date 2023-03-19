#include "main.h"

/**
 * _atoi - convert to integer
 * @s: string to convert
 * Return:  a integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int sum = 0;
	int signs = 1;
	int res;

	while (s[c])
	{
		if (s[c] == '-')
		{
			signs = signs * -1;
		}
		else if (s[c] >= '0' && s[c] <= '9')
		{
			break;
		}
		c++;
	}

	while (s[c] >= '0' && s[c] <= '9')
	{
		sum = (sum * 10) + (s[c] - '0');
		c++;
	}

	if (signs == -1)
	{
		res = -sum;
	}
	else
	{
		res = sum;
	}
	return (res);
}
