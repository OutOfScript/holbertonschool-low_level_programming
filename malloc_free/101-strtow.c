
#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the words in a string
 * @str: string to count
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i;
	int count;
	int in_word;

	count = 0;
	in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of words, or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, start, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		len = i - start;
		words[k] = malloc(sizeof(char) * (len + 1));

		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[k][j] = str[start + j];

		words[k][len] = '\0';
		k++;
	}

	words[k] = NULL;

	return (words);
}

