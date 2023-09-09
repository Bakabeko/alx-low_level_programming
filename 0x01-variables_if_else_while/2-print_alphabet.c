#include <stdio.h>

/**
 * main - print lower case
 *
 * return - always 0 (success)
 *
 */

int main (void)
{

int lower='a';
while (lower <= 'z')
{
	putchar(lower);
	lower++;
	putchar('\n');
}
return (0);
}
