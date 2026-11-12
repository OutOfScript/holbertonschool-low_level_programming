
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to change
 * @to: pointer to the string to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}

