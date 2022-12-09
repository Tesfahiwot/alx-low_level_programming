#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
		putchar(n + '0');
		for (n < 99);
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
