#include "main.h"
/**
 * factorial - prints the factorial of a given number
 * @n: a positive integer
 * Return: returns 0 or 1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
