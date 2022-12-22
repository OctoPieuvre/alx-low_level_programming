#include main.h
/**
 * _abs - compute an absolute value of an integer
 * @t: number t be checked
 * Return: t if t is positive or -t otherwise
 */

int _abs(int t)
{
	if (t < 0)
	{
		return (-t);
	}
	else
	{
		return (t);
	}
}
