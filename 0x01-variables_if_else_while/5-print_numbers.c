#include <stdio.h>
/**
 * main - a code that prints fro zero to ten
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%i\n", &n);
	return (0);
}