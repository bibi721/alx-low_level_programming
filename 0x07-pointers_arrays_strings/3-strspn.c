#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string input
 * @accept: consists bytes
 * Return: numbers bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	
	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
