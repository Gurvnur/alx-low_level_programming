#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @x: the string to be capitalized
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1]) && (x[a] >= 97 && str[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}
