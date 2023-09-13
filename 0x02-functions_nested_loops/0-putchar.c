#include <stdio.h>
#include "main.h"

/**
 * Entry - point
 *
 * description : print _putchar
 *
 * return : always 0 (success)
 */

int main(void){

int i;
char str[] = "_putchar";
for(i = 0;i < 8;i++){
	_putchar(str[i]);
}
        _putchar('\n');

return (0);
}
