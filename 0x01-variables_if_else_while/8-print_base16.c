#include <stdio.h>

/**
 * main - your main function starts here
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	int val;
	char letr;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');

	for (letr = 'a'; letr <= 'f'; letr++)
		putchar(letr);

	putchar('\n');
	return (0);

}
