#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program to generate random password
 * Return: 0
 */
int main(void)
{
	int value;
	char randomizer;

	srand(time(NULL));

	while (value <= 2645)
	{
		randomizer = rand() % 128;
		value += randomizer;

		putchar(randomizer);
	}
	putchar(2772 - value);
	return (0);
}
