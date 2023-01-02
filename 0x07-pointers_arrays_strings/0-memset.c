#include "main.h"
/**
 * _memset - fills memory with consrant int
 * @s: memory
 * @b: constant
 * @n: bytes
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;
	return (s);
}
