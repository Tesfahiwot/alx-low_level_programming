#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int d = 0;
	int e = 0;

	while (e < 10)
	{
		while (d = 0)
		{
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (c +d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++:
	}
	putchar('\n');
	return (0);
}
