#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

/* your code goes here */

{
/* declaration of variables*/
int digit1;
int digit2;
int a;
/*initializing of variables*/
a = 0; /* a is needed to increase initialization*/
digit1 = 0;
digit2 = a;
while (digit1 <= 9)
{
	for (digit2 = a; digit2 <= 9; digit2++)
	{
		if (digit1 != digit2)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			if ((digit1 == 8) && (digit2 == 9))
			{
				putchar(' ');
			}
			else
			{
				putchar(44);
				putchar(' ');
			}
		}
		else
		{
		}

	}
	digit1++;
	a = a + 1;
}
	return (0);
}
