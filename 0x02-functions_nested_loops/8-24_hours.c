#include "main.h"

/**
 * jack_bauer - it prints every minute in a day
 * Description - Time.
 *
 */

void jack_bauer(void)
{

int a;
int b;
int c;
int d;

for (a = 0; a <= 9; a++)
{
	_putchar(a + '0');

	for (b = 0; b <= 9; b++)
	{
		_putchar(b + '0');
		_putchar(':');

		for (c = 0; c <= 9; c++)
		{
			_putchar(c + '0');

			for (d = 0; d <= 9; d++)
			{
				_putchar(d + '0');
				_putchar('\n');
			}
		}
	}
}

}
