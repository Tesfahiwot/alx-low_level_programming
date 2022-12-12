#include <stdio.h>
/**
 *main - prints all possible differe
 *Return: Always 0
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n <= 9; n++)
	{
		for (x = n + 1; x <= 9; x++)
		{
		putchar(n + '0');
		putchar(x + '0');
		if (n < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
