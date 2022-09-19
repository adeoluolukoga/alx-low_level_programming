#include "main.h"

/** 
* reset_to_98 - updates value of pointer to 98 
*
* @*n: this is the pointer
* 
*/

void reset_to_98(int *n)
{
int a; /* actual variable declaration*/
int *n;

n = &a; /*pointing n to address of variable*/
*n = 98; /* changing value of 'a' using pointer */
}

