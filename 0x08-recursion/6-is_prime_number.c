#include "main.h"
/**
 * _prime_number - returns 1 if the input integer is a prime number else 0
 * @n: an integer
 * Return: returns 1 0r 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
