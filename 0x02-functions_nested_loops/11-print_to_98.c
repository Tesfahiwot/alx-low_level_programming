#include "main.h"
/**
 * print_to_98 - prints all natural number from n to 98
 * @n: an integer
 * Return: alwyas 0
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		_putchar(x + '0');
	}
}
