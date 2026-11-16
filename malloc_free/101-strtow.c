
#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts words in a string
 * @str: string to count
 *
 * Return: number of words
 */
static int word_count(char *str)
{
	int i, count, in_word;

	i = 0;
	count = 0;
	in_word = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
			in_word = 0;
		i++;
	}
	return (count);
}

/**
 * free_words - frees an array of strings
 * @words: array to free
 * @count: number of allocated words
 */
static void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);
	free(words);
}

/**
 * copy_word - copies one word from a string
 * @str: source string
 * @start: starting position
 * @end: ending position
 *
 * Return: pointer to copied word, or NULL
 */
static char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];

	word[i] = '\0';
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, start, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		words[j] = copy_word(str, start, i);
		if (words[j] == NULL)
		{
			free_words(words, j);
			return (NULL);
		}
		j++;
	}
	words[j] = NULL;

	return (words);
}

