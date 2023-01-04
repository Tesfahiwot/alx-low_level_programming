#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: returns -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if else (n < 0)
	{
		return (- 1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (power_operation(n, 2));
	}

