#include <stdio.h>

/**
 * 
 * main - print : 0, 1,..., 9
 *
 * Return: always 0 (success)
 */

int main(void)
{
int num = 0;
while (num < 10)
{
if (num != 9)
{
	putchar(num + 48);
	putchar(',');
	putchar(' ');
}
        num++;
} 
        putchar('\n');
return (0);
}
