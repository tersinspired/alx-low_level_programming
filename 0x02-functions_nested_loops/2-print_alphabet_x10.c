#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times in lowercas
 */

void print_alphabet_x10(void)

{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}

