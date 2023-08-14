#include <stdio.h>
/**
 * main -  program will assign a random number
 * Return: Always 0
 */

int main(void)
{
	int n;

	if ((n % d) 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % -10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
		n, n % 10);
	}
	return (0);
}

