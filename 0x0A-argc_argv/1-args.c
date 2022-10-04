#include "main.h"
#include <stdio.h>
/**
 * main - program that prints arguments' count
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc == 1)
		printf("%d\n", argc - 1);

	else
	{
		for (count = 0; *argv; i++, argv++)
			;

		printf("%d\n", count - 1);

	}
	return (0);
}
