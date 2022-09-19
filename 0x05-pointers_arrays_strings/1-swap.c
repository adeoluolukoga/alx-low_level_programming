#include "main.h"

/**
 * swap_int - swap value of one variable to another
 *
 * @a: variable 1
 * @b: variable 2
 *
 */

void swap_int(int *a, int *b)
{

int c;
int d;

c = *a;
d = *b;

*a = d;
*b = c;

}

