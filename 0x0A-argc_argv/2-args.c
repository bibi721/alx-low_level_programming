#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counts;

	for (counts = 0; counts < argc; counts++)
		printf("%s\n", argv[counts]);

	return (0);
