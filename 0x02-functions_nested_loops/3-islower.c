#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 *
 * description : check about lowercase
 *
 * return : 0 (success)
 */

int _islower(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
