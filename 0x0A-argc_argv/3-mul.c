#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Two numbers' multiplication
 * @argc: count arguments
 * @argv: argument array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mull1, mull2;

	if (argc == 3)
	{
		mull1 = atoi(argv[1]);
		mull2 = atoi(argv[2]);

		printf("%d\n", mull1 * mull2);
		return (0);

	}

	printf("OPPS ! Error\n");

	return (1);

}
