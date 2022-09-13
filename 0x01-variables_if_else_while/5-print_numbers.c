#include <stdio.h>

/**
 * main -print base 10 numbers starting from 0
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}


