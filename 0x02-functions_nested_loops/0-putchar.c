#include <unistd.h>
#include <main.h>

/**
 * main - Functions, nested loops
 * description: It prints the word Putchar, folloed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
