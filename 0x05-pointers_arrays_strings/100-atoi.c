#include "main.h"
/**
 * _atoi - converts string to int
 * @s: the sting
 */
int _atoi(char *s)
{
	int tik = 1;

	unsigned int b = 0;

	do {
		if (*s == '-')
			tik *= -1;

		else if (*s >= '0' && *s <= '9')
			b = (b * 10) + (*s - '0');
		else if (b > 0)
			break;
	} while (*s++);

	return (b * tik);

}
