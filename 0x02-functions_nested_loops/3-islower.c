#include "main.h"
/**
 * _islower - this is program that checks lowercase character
 * @c: single letter input
 * Return: 0 and 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
