#include <stdio.h>
/**
 * main - prints the largesr prime factor
 * Return: always 0
 */
int main(void)
{
	long int n, k;

	n = 612852475143;
	for (k = 2; k <= n; k++)
	{
		if (n % k == 0)
		{
			n /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
