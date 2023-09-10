#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main - false or true validation
 *
 * description : test a randum number if it is negative or psitive or zero
 *
 *Return : 0 always (sucess)
 */

int main(void)
{
	
        int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
		printf("%i is positive\n", n );
        else if ( n == 0 )
		printf("%i is zero\n", n );
        else
		printf("%i is negative\n", n );
	return (0);
}
