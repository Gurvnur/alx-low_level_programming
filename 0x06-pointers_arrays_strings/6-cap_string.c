#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string to be capitalized
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (*str[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
	return (*str);
}
