#include <stdio.h>

/**
 * main - Entry point
 * Description - it prints digits 0 to 14 10xtimes
 * Return void
 */

int main()
{
	int digit = 0;
	int count = 1;

	while (count <= 10)
	{

		for (digit = 0; digit <= 14; digit++)
		{
			if (digit < 10)
			{
				putchar(digit + '0');
			}
			else
			{
				putchar((digit / 10) + '0');
				putchar((digit % 10) + '0');
			}
		}

		count++;

		putchar('\n');
/* note that there is no return bcos return value of the function is void*/
	}
		
	return (0);
}
