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
int digit1;

digit1 = 0;

for (digit1 = 0; digit1 <= 9; digit1++)
{
	putchar(digit1 + '0');

	if (digit1 < 9)
	{
		putchar(',');
	}
	else
	{
	}

	putchar(32);
}

	putchar(36);

	return (0);

}
