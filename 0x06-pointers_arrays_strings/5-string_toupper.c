#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @s: the string
 * Return: uppercse string
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

	}

	return (str);

}