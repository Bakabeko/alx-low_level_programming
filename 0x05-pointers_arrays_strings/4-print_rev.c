#include "main.h"
/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;

	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
