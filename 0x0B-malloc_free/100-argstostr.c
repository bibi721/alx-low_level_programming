#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arg
 * @ac: arguments' count
 * @av: a pointer to argument
 * Return: NULL or ptr
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int m, n, in, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			size++;
		}
	}
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	in = 0;

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			ptr[in++] = av[m][n];

		ptr[in++] = '\n';

	}

	ptr[size] = '\0';

	return (ptr);

}
