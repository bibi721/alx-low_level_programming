#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string input
 * @accept: consists bytes
 * Return: numbers bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	int len = 0;

	while (accept[len] != '\0')
		len++;


	
	for (int i = 0; i < len; i++)
	{
		if (accept[i] == s[count])
		{
			count++;
		}
	}
	return (count);
}
