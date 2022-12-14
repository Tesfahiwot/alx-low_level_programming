#include "main.h"
/**
 * print_to_98 - prints all natural number from n to 98
 * @n: an integer
 * Return: alwyas 0
 */
void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
