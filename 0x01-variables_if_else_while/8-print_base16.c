#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
	putchar(number + '0');
}
for (number = 10; number <= 15; number++)
{
	putchar(number - 10 + 'a');
}
putchar('\n');
return (0);
}
