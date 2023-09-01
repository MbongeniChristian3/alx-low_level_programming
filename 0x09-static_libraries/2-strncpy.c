#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: input value
 * @src: source sring
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ;j < n  && src[j] != '\0' ; j++)
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return(dest);
}
