#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{	putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
