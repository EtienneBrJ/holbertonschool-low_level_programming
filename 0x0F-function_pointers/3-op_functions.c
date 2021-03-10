#include "3-calc.h"
/**
 * op_add - return the sum of a and b
 * @a: first int
 * @b: second int
 * Return: a + b
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the sub of a and b
 * @a: first int
 * @b: second int
 * Return: a - b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the mul of a and b
 * @a: first int
 * @b: second int
 * Return: a * b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return a divised by b
 * @a: first int
 * @b: second int
 * Return: a / b
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return a % b
 * @a: first int
 * @b: second int
 * Return: a % b
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
