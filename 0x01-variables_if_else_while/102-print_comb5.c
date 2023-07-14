#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;

	int num1, num2, num3, num4;

	for (i = 0; i < 100; i++)
	{
		num1 = i / 10;
		num2 = i % 10;
		for (j = 0; j < 100; j++)
		{
			num3 = j / 10;
			num4 = j % 10;

			if (num1 < num3 || (num1 == num3 && num2 < num4))
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(32);
				putchar(num3 + '0');
				putchar(num4 + '0');

				if (!(num1 == 9 && num2 == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
