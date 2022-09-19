#include "main.h"

/**
 * reset_to_98 - updates value of pointer to 98
 *
 * @n: this is the variable of pointer
 *
 */

void reset_to_98(int *n)
{
int a; /* actual variable declaration*/

a = 5; /* 5 was just used to initialized nothing special about it*/
n = &a; /*pointing n to address of variable*/
*n = 98; /* changing value of 'a' using pointer */
}

