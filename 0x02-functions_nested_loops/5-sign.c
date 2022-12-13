#include "main.h"
/**
 * print_sign - prints signs
 * @n: an argument
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_Putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_Putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-');
	}
}
