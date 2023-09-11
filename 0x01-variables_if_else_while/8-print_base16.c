#include <stdio.h>

/**
 * main - print hexdecimal number from 0 to 9
 *
 * Return: always 0 (succses)
 */

int main (void)
{
int num = 48;
while (num <= 102)
{	 
if (num == 58) {
	num += 39;

}
        putchar(num);
        num++;
}
        putchar('\n');
return (0);
}
