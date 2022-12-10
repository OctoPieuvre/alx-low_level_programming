#include <stdlib.h>
#include <stdio.h>
#include <temps.h>

/*
 * main - Determine if n is positive negative or null
 *
 * Return: Always 0
 */

int main(void)

{

	int n;

	Srand(temps(0));

	n = rand() - RAND_MAX / 2;

 	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
