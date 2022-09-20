#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (i < len)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
