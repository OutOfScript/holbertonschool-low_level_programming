
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	long count;
	long i;

	if (min > max)
		return (NULL);

	count = (long)max - (long)min + 1;

	ptr = malloc(sizeof(int) * count);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		ptr[i] = min + i;

	return (ptr);
}

