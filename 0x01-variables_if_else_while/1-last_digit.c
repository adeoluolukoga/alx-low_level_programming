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

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
	
	last_digit = n % 10;

		if (last_digit > 5)
		{
			printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit, "and is greater than 5\n");
		}
			else if (last_digit == 0)
			{
				printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit, "and is zero\n");
			}
				else
				{
					printf("%s %d %s %d %s", "Last digit of", n, "is", last_digit, "and is less than 6 and not zero\n");
				}
					return (0);
}
