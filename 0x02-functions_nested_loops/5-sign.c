#include "main.h"

/**
 * main - Entry point
 *
 * description : check sign of number
 *
 * return: 0 (succcess)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
                _putchar('-');
		return (-1);
	}

	else
	{
               _putchar('0');
	       return (0);
	}
}