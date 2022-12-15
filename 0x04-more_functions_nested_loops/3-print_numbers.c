#include "main.h"
/**
 * print_numbers - a fuction that prints from 0 to 9
 * Return: from 0 - 9
 */
void print_numbers(void)
{
	int i;
	
	i = 0;

	while (i < 10)
		_putchar(i + '0');
		_putchar('\n');
}
