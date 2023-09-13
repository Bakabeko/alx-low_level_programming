#include "main.h"

/**
 * Entry - point
 *
 * description : print alphabet in lowercase
 *
 * return : always 0 (success)
 */

void print_alphabet(void)
{
	char c;
	for(c = 'a';c <='z';c++)
	{
		putchar(c);
	}
	putchar('\n');
}
