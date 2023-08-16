#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: first no.
 * @b: second no.
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: first no.
 * @b: second no.
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply of two numbers
 * @a: first no.
 * @b: second no.
 * Return: multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first no.
 * @b: second no.
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - reminder of division of two numbers
 * @a: first no.
 * @b: second no.
 * Return: reminder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
