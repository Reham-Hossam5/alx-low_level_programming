#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastnum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
if (lastnum > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
}
else if (lastnum < 6 && lastnum != 0)
{
	printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastnum);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, lastnum);
}
return (0);
}
