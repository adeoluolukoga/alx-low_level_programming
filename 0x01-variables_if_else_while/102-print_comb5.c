#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
/* declaration of variables*/
int digit1;
int digit2;
int digit3;
int digit4;
/*initializing of variables*/
int a = 0; /* a is needed to increase initialization*/
int b = 0;
int c = 0;
digit1 = 0;

while (digit1 <= 9)
{
	for (digit2 = a; digit2 <= 8; digit2++)
	{
		for (digit3 = b; digit3 <= 9; digit3++)
		{
			for (digit4 = c; digit4 <= 9; digit4++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(' ');
				putchar(digit3 + '0');
				putchar(digit4 + '0');
				putchar(',');
				putchar(' ');
			}
		}
		a = a + 1;
		c = a + 1;/* don't know why c=c+1 didn't work*/
	}
	digit1++;
	b = b + 1;
}
	return (0);
}
