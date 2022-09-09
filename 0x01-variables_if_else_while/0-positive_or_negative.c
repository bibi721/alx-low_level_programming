#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Thenumber is positive\n",n);
	}
	else if (n < 0)
	{
		printf("Thenumber is negative\n",n);
	}
	else 
	{
		printf("Thenumber is zero\n",n);
	}
	scanf("Thenumber", &n);
	return (0);
}
