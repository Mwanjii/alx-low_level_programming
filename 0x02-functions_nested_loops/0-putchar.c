#include <main.h>

/**
 * prints the letter on the standard output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
