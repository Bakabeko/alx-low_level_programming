#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{

	
/**tast
 * we are going to test this number if
 * *
* it is negstive or positive or zero
*
* then return(0)
*/

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if(n>0)
        printf("%i is positive\n", n);
else if(n==0)
        printf("%i is negative\n", n);
else
	printf("%i is zero\n", n);

	return (0);
}
