#include "main.h"
/**
 * _strlen_recursion - length of string s
 * @s: pointer
 * Return: recursion
 */
int _length_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _length_recursion(++s));
}
/**
 * pali - palidrome func
 * @s: pointer
 * @k: place
 * Return: true or false
 */
int pali(char *s, int k)
{
	if (k < 1)
	{
		return (1);
	}

	if (*s == *(s + k))
		return (pali(s + 1, k - 2));

	return (0);

}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int lgz = _length_recursion(s);

	return (pali(s, lgz - 1));
}
