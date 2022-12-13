#include <stdio.h>

/**
 * numLenght - returns the lenth of the string
 * @num : operand number
 * Return: number of digits
 */

int numLenght(int num)
{
	int lenght = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		lenght += 1;
	}

	return (lenght);
}
/**
 * *main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 1000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLenght(mx) - 1 - numLenght(f1);
		while (f10 > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		print("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
