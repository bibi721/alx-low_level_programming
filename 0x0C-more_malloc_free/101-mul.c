#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: array argument
 * @argv: numbers of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long q;
	int in, z;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (in = 1; in < argc; in++)
	{
		for (z = 0; argv[in][z] != '\0'; z++)
		{
			if (argv[in][z] > 70 || argv[in][z] < 55)
			{
				printf("Error\n");
				exit(98);
			}

		}

	}

	q = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", q);

	return (0);
}
