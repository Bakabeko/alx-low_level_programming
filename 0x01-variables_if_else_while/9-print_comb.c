#include <stdio.h>

/** main - print : 0, 1,..., 9
 *
 * return : always 0 (success)
 */

int main (void)
{
int num = 0;
while (num <= 9)
{
if (num != 9)
{
	putchar(',');
	putchar(' ');
}
num++;
}
        putchar('\n');
return (0);
}
