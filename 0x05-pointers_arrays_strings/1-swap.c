#include "main.h"

/**
 * swap_int - swap two integers
 * @d: value 1
 * @j: value 2
 * Return: void
 */

void swap_int(int *d, int *j)
{
	int c;

	c = *d;
	*d = *j;
	*j = c;
}
