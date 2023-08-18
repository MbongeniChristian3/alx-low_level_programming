#include "main.h"

/**
 * print_number - the function will print an integer
 * @m: is the integer to be printed
 */

void print_number(int m)
{
	unsigned int num = m;

	if (m < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
