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
char alpha_l;

char alpha_u;

alpha_l = 'a';

alpha_u = 'A';

for (alpha_l = 'a'; alpha_l <= 'z'; alpha_l++)
{
	putchar(alpha_l);
}

for (alpha_u = 'A'; alpha_u <= 'Z'; alpha_u++)
{
	putchar(alpha_u);
}

	putchar('\n');

	return (0);

}
