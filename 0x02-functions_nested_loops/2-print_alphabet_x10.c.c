#include "main.h"

/**
 * Prints the alphabet ten times on the standard output followed by new line.
 */
void print_alphabet_x10(void)
{
	char ch;

	int i=0;
        

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
