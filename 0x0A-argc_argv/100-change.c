#include <stdio.h>
#include <stdlib.h>
/**
 * main -  minimum number of coin
 * @argc: number of argument
 * @argv: arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int count;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}

	count = atoi(argv[1]);
	while (count > 0)
	{
		coins++;
		if ((count - 25) >= 0)
		{
			count -= 25;
			continue;
		}
		if ((count - 10) >= 0)
		{
			count -= 10;
			continue;
		}
		if ((count - 5) >= 0)
		{
			count -= 5;
			continue;
		}
		if ((count - 2) >= 0)
		{
			count -= 2;
			continue;
		}
		count--;
	}
	printf("%d\n", coins);

	return (0);
}
