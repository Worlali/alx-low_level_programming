#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet x10times
 * Return: void
 */

void prit_alphabet_10(void)
{
	char ch;
	int i;
	i = 0;
	while (i < 10)
	{
		for (ch ='a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
