#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: function parameter
 * Return: p
 */

int print_last_digit(int i)
{
	int p;

	p = i % 10;
	if (i < 0)
		p = -p;
	_putchar(p + '0');
	return (p);
}
