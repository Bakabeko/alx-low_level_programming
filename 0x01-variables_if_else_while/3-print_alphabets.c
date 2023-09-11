#include <stdio.h>

/**
 * main - print upper case and lower case
 *
 * Return: always 0 (success)
 *
 */

int main (void)
{

int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
       putchar(lower);
       lower++;
}
while (upper <= 'z')
{
        putchar(upper);
}
        putchar('\n');
 return (0);
}
