#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98 starting from n
 *
 * @n: starting integer
 *
 */
void print_to_98(int n)
{
int a;
	if (n <= 98)
	{
		for (a = n; a <= 98 ; a++)
		{
			printf("%d%s", a, ", ");
		}
	}
	else
	{
		for (a = n; a > 98 ; a--)
		{
			printf("%d%s", a, ", ");
		}
	}
}
