#include <stdio.h>
                                                  /**                                                * main - print lower case in reverse 
 *
 * return - always 0 (success)
 *
 */

int main (void)
{

int lower='z';
while (lower >= 'a')
{
        putchar(lower);                                   lower--;
}
        putchar('\n');
return (0);
}
