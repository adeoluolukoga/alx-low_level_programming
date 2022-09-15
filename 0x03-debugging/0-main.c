#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

#include "main.h"

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 */

int positive_or_negative(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* your code goes there */
		if (n > 0)
		{
			printf("%d %s", n, "is positive\n");
		}
			else if (n == 0)
			{
				printf("%d %s", n, "is zero\n");
			}
				else
				{
					printf("%d %s", n, "is negative\n");
				}
					return (0);
}
