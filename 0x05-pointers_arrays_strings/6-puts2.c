#include "main.h"
#include <string.h>

/**
 * puts2 - puts 2 functions
 * @str: string parameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putschar(str[i]);
	_putchar('\n');
}
