#include "main.h"
/**
 * times_table - it prints multiplication table from 0 to 9
 * Description - Times table
 */
void times_table(void)
{
int a = 0;
int b = 0;
int c;
for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		c = a * b;
		if (c < 10)
		{
			_putchar(c + '0');
		}
		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
	}
}
}
