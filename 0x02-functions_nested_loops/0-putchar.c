#include <stdio.h>
#include "main.h"

/**
 * Entry - point
 *
 * description : print _putchar
 *
 * return : always 0 (success)
 */

int main(){

int i;
char str[] = "_putchar";
for(i = 0;i < 8;i++){
	putchar(str[i]);
}
putchar('\n');

return (0);
}
