#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, length, sum;
	char *s;

	if (argc < 2)
		printf("0\n");

	else
	{
		sum = 0;
		for (n1 = 1; n1 < argc; n1++)
		{
			s = argv[n1];
			length = strlen(s);

			for (n2 = 0; n2 < length; n2++)
			{
				if (isdigit(*(s + n2)) == 0)
				{
					printf("Error\n");
					return (1);
				}

			}

			sum += atoi(argv[n1]);

		}

		printf("%d\n", sum);

	}
	return (0);
}
