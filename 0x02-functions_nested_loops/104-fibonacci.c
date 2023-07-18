#include <stdio.h>

/**
 * num_length - returns the length of string
 * @num: operand number
 * Return: number of digits
 */

int num_length(int num)
{
	int length;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and  2 followed by a new line
 * Return: 0
 */

int main(void)
{
	int count, init;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000;
	unsigned long initf1 = 0, initf2 = 0, initsum = 0;

	for (count = 1 ; count <= 98 ; count++)
	{
		if (initf1 > 0)
			printf("%lu", initf1);
		init = num_length(max) - 1 - num_length(f1);
		while (initf1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % max;
		initsum = initf1 + initf2 + (f1 + f2) / max;
		f1 = f2;
		initf1 = initf2;
		f2 = sum;
		initf2 = initsum;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
