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

int digit2;

digit1 = 0;

digit2 = 0;

for (digit1 = 0; digit1 <= 9; digit1++)
{
	for (digit2 = 0; digit2 <= 9; digit2++)
	{
		putchar(digit1 + '0');
		putchar(digit2 + '0');
		putchar(',');
	}
}

	return (0);

}
