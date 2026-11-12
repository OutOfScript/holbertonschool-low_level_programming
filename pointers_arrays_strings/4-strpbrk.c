#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any byte in accept
 * @s: The string to search
 * @accept: The characters to search for
 *
 * Return: Pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

