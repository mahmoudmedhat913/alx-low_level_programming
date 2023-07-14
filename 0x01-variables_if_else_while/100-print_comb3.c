#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int num1, num2;

	num1 = '0';

	num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8' || (num1 == '8' && num2 != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
		num2 = '0';
	}
	putchar('\n');
	return (0);
}
