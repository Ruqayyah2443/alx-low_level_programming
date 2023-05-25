#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Returns the sum of a and b.
* @a: The 1st num.
* @b: The 2nd num.
*
* Return: Sum of a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Returns the difference of a and b.
* @a: 1st num.
* @b: 2nd num.
*
* Return: The difference of a and b.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the product of a and b.
* @a: The 1st num.
* @b: The 2nd num.
*
* Return: The product of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Returns the division of a by b.
* @a: The 1st num.
* @b: The 2nd num.
*
* Return: The quotient of a and b.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Returns the remainder of the division of a by b.
* @a: The 1st num.
* @b: The 2nd num.
*
* Return: The remainder of the division of a by b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
