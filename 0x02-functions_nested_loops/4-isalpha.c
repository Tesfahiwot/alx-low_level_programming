#include "main.h"
/**
 * _isalpha - checkes for alphabetical letter
 * @c: a character to be checked
 * Return: returns 0or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
