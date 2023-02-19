#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 /**
 * main = Assign random number to variable n
 * 
 * return: always 0
 */

int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;

/* code here */

if (n > 0)
{
printf("%d is positive\n", n);
}

if (n == 0)
{
printf("%d is zero\n", n);
}

if (n < 0)
{
printf("%d is negative\n", n);
}

return (0);
}
