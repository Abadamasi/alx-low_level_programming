#include "main.h"
/**
 * print_alphabet_10x - Make alphabet x10 times
 */
void print_alphabet_10x(void)
{
	char ch;
	int i;
	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
	}
}
