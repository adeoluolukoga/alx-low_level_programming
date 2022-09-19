#include "main.h"

/**
 * reset_to_98 - updates value of pointer to 98
 *
 * @n: this is the variable of pointer
 *
 */

void reset_to_98(int *n)
{
int n;
int *p; /* pointer variable declaration*/

n = 5; /* 5 was just used to initialized nothing special about it*/
p = &n; /*pointing p to address of variable*/
*p = 98; /* changing value of 'n' using pointer */
}

