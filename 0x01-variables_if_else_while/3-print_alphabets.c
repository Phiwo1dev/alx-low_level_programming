#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper case
 *
 * Return: Always 0 (Succes)
 */
int main(void)

{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
