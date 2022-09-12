#include <stdio.h>

/**
 * main - main function starts here
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
