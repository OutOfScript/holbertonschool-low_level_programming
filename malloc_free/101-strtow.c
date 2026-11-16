
#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts the words in a string
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
 * word_length - gets the length of a word
 * @str: string
 * @start: starting position
 *
 * Return: length of the word
 */
static int word_length(char *str, int start)
{
	int len;

	len = 0;
	while (str[start + len] != ' ' && str[start + len] != '\0')
		len++;

	return (len);
}

/**
 * copy_word - copies a word into allocated memory
 * @str: source string
 * @start: starting position
 * @len: word length
 *
 * Return: pointer to copied word, or NULL
 */
static char *copy_word(char *str, int start, int len)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[start + i];

	word[len] = '\0';
	return (word);
}

/**
 * free_words - frees allocated words
 * @words: array of words
 * @count: number of allocated words
 *
 * Return: nothing
 */
static void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of words, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, count, start, len, k;

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
		len = word_length(str, start);
		words[k] = copy_word(str, start, len);

		if (words[k] == NULL)
		{
			free_words(words, k);
			return (NULL);
		}

		k++;
		i += len;
	}

	words[k] = NULL;
	return (words);
}
