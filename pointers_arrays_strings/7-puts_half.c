
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

	for (i = length / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

