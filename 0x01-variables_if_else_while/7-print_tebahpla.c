#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
	putchar(letter);
}
return (0);
}
