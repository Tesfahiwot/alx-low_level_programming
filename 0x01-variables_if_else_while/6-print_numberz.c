#include <stdio.h>
/**
 * main - print numbers from zero to ten using putchar
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
