
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
		i = (length + 1) / 2;
	else
		i = length / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
