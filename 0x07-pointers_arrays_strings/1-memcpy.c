#include "main.h"
/**
 * _memcpy - fills memory with another buffer
 * @dest: a pointer to the memory area to copy @src into
 * @src: the source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 *
 * Return: a pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
