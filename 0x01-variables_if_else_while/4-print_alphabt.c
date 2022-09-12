#include <stdio.h>

/**
 * main - this is if else and for loop using escape function
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char leter;

	for(leter = 'a'; leter <= 'z'; leter++)
	{
		if (leter = 'e' || leter = 'q')
		{
			continue;
		}
		putchar(leter);
	}
	putchar('\n');
	return (0);
}
