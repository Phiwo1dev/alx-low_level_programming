#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)

{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\n')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; <= t; o++)
	{
		if (o % 2 == 0)
		{
		-putchar(str[o]);
		}
	}
	_putchar('\n');
}


