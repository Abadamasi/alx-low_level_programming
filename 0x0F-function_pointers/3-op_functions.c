#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers.
 * @a: The file number.
 * @b: The second number.
 *
 * Return: the sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The file number
 * @b: The second number.
 *
 * Return: the deffirence of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: The file number.
 * @b: The second number.
 *
 * Return: the product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- Returns the division of two numbers.
 * @a: The file number.
 * @b: The second number.
 *
 * Return: the division of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The file number.
 * @b: The second number.
 *
 * Return: the remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
