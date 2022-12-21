#include "main.h"

/**
 * _strncat - concatenates two strings using at most an
 * inputted number of bytes from source
 * @dest: the string to be appended upon
 * @src: the string to be appended to destination
 * @n: the number of bytes from source to be appended to dest
 *
 * Return: A pointer to the resulting string destinatiomn
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
