#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0''; s++)
	{
		len += 1;
	}

	return (strlen(s));
}
