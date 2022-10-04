#include "main.h"
#include <stdlib.h>
/**
 * word_string - locates the index working
 * @str: string
 * Return: ptr
 */
int word_string(char *str)
{
	int in = 0, ptr = 0;

	while (*(str + in) && *(str + in) != ' ')
	{
		ptr++;
		in++;

	}

	return (ptr);
}

	/**
	 * string_counter - count the number
	 * @str: string
	 * Return: r
	 */
	int string_counter(char *str)
	{
		int in = 0, r = 0, ptr = 0;

		for (in = 0; *(str + in); in++)
		{
			ptr++;
		}
		for (in = 0; in < ptr; in++)
		{
			if (*(str + in) != ' ')
			{
				r++;
				in += word_string(str + in);

			}

		}

		return (r);

	}

	/**
	 * strtow - a function w/c splits a string into words
	 * @str: split string
	 * Return: NULL or q
	 */
	char **strtow(char *str)
	{
		char **q;
		int in = 0, r, m, n, k;

		if (str == NULL || str[0] == '\0')
			return (NULL);

		r = string_counter(str);

		if (r == 0)
			return (NULL);

		q = malloc(sizeof(char *) * (r + 1));

		if (q == NULL)
			return (NULL);

		for (m = 0; m < r; m++)
		{
			while (str[in] == ' ')
				in++;

			n = string_counter(str + in);

			q[m] = malloc(sizeof(char) * (n + 1));

			if (q[m] == NULL)
			{
				for (; m >= 0; m--)
					free(q[m]);

				free(q);
				return (NULL);

			}

			for (k = 0; k < n; k++)
				q[m][k] = str[in++];
			
			q[m][k] = '\0';

		}

		q[m] = NULL;

		return (q);

	}
