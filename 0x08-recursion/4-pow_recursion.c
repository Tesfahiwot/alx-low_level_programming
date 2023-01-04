#include "main.h"
/**
 * _pow_recursion - prints the value of x raised the value of y
 * @x: integer 1
 * @y: integer 2
 * Returb:the value of x raised to the value of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (- 1);
	}
	else if (y == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

