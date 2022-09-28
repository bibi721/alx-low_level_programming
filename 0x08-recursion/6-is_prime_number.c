#include "main.h"

int natural_number(int n, int counter);
int is_prime_number(int n);

/**
 * natural_number - whether natural number or not
 * @n: the number
 * @counter: iterator
 * Return: natural_number
 */
int natural_number(int n, int counter)
{
	if (n % counter == 0)
		return (0);

	if (counter == n / 2)
		return (1);

	return (natural_number(n, counter + 1));

}

/**
 * is_prime_number - prime or not
 * @n: the number
 * Return: natural_number
 */
int is_prime_number(int n)
{
	int counter = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (natural_number(n, counter));
}

