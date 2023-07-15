#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstNumber, secondNumber;
for (firstNumber = 0; firstNumber <= 99; firstNumber++)
{
	for (secondNumber = firstNumber; secondNumber <= 99; secondNumber++)
	{
		putchar(firstNumber / 10 + '0');
		putchar(firstNumber % 10 + '0');
		putchar(' ');
		putchar(secondNumber / 10 + '0');
		putchar(secondNumber % 10 + '0');
		if (firstNumber != 99 || secondNumber != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
