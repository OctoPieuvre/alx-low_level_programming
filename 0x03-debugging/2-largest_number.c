#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 * @a: fisrt integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a < b)
	{
		if (b < c)
		{
			largest = c;
		}
		else if (b > c)
		{
			largest = b;
		}
	}
	else if (a > b)
	{
		if (b > c)
		{
			largest = a;
		}
		else if (b < c)
		{
			if (a < c)
			{
				largest = c;
			}
			else if (a > c)
			{
				largest = a;
			}
		}
	}
}
