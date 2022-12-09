#include <stdio.h>
#include <stdlib.h>

/**
 * main - return all posible combination of a single-digit number
 *
 * Return: Always 0 (Succes)
 *
 */

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);

}
