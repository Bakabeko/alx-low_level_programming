#include "main.h"

/**
 * main - Entry point
 *
 * description : check about the input is lowercase or uppercase
 *
 *return : 0 (success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
        return (0);
}
