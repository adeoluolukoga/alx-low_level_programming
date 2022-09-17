#include <stdio.h>

/**
 * main - prints digits 0 to 9 except 2 and 4
 *
 * Description - printing is done using putchar
 *
 */

int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				putchar(i);
			}
			else
			{
			}
		}
		else
		{
		}
	}

		putchar('\n');

		return (0);
}
