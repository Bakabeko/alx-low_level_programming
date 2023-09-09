#include <stdio.h>

/**main - print all character without q and e
 *
 *return : always 0 (success)
 */

int main (void)
{

int lower = 'a';
while (lower <= 'z')
{
if (lower == 'q' || lower == 'e')
  {
     lower++;
  }
else 
  {
    putchar(lower);
    lower++;
  }
 }
     putchar('\n');
return (0);
}
