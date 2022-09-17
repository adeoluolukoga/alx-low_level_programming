#include <stdio.h>

/**
 * main - prints digits 0 to 9 except 2 and 4
 *
 * Description - printing is done using putchar
 *
 */

int main()
{
	char i;

	for (i = 48; i <= 57; i++)/* _putchar uses char ASCII format */
	{
		if (i == 50)
		{
			putchar(0);
		}
		else if (i == 52)
		{
			putchar(0);
		}
		else
		{
			putchar(i);
		}
	}

		putchar('\n');

		return (0);
}
