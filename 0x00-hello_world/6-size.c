#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Succes)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (1) sizeof(char));
printf("Size of an int: %d byte(s)\n", (4) sizeof(int));
printf("Size of a long  int: %d byte(s)\n", (8) sizeof(long int));
printf("Size of a long long  int: %d byte(s)\n", (8) sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (4) sizeof(float));
return (0);
}
