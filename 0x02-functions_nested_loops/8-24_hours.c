#include "main.h"
/**
 * jack_bauer - prints all the seconds of the day
 * Return: always 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 4; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
				_putchar('\n');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
