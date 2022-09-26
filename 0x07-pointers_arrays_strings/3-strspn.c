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
	int k = 0;
	
	while (*accept != '\0')
		len++;

	while (*s != '\0')
		k++;


	for (int i = 0; i < len; i++)
	{
		if (count == k)
			break;

		if (accept[i] == s[count])
		{
			count++;
		}
	}
	return (count);
}
