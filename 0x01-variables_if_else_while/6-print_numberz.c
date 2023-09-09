#include <stdio.h>

/**
 * main - print all single digit number with put char
 *
 * return : always 0 (success)
 *
 */
int main (void)

{
int num;
for (num = '0';num <= '9';num++)
{
        putchar(num);
}
        putchar('\n');
return (0);

}
