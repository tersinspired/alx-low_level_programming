#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function is to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
