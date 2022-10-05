#include "main.h"

/**
 * _isupper - this is code to find if c is uppercase or not.
 * @c: input character
 * Return: void
 */
int _isupper(int c)
{
	char uppercase = 'A';

	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
