#include <stdio.h>
#include "main.h"

/**
 * print_rev - this function prints a string in reverse order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	ing i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n);
}
