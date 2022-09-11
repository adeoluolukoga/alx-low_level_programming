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

/* your code goes here*/

{
char num;

char alpha;

num = 0;

alpha = 'a';

for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
}

for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}

	putchar('\n');

	return (0);

}
