#include "main.h"
/**
 * print_alphabet_x10 - nested loop program
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int cnt = 1;
	int ch;

	while (cnt <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		cnt++;
	}
	_putchar('\n');
}
