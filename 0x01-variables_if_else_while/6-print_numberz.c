#include <stdio.h>

/**
 * main - Prints all sigle digit numbers starting from zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');


	return (0);
}
