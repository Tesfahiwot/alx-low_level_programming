#include <stdio.h>
/**
 * main - print first in lower alphabet and then in upper
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a', letter <= 'z', letter++)
	putchar (letter);
	for (letter = 'A', letter <= 'Z', letter++)
	putchar (letter);
	putchar('\n');
	return (0);
}
