#include <stdio.h>


/**
 * main - prints Fizz Buzz
 *
 * Return: 0 always
 */

int main(void)
{
	int n;


	for (n = 1; n < 101; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n != 100)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
