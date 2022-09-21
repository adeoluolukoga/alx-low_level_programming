#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

printf("%s%lu%s\n","Size of a char: ", sizeof(char), " bytes(s)");
printf("%s%lu%s\n","Size of an int: ", sizeof(int), " bytes(s)");
printf("%s%lu%s\n","Size of a long int: ", sizeof(long int), " bytes(s)");
printf("%s%lu%s\n","Size of a long long int: ", sizeof(long long int), " bytes(s)");
printf("%s%lu%s\n","Size of a float: ", sizeof(float), " bytes(s)");

return (0);
}
