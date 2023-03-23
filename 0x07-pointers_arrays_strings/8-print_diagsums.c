#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Sum of the two diagonal of square matrix
 * @a: Matrix
 * @size: size of matrix
 * Return: Integer
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
