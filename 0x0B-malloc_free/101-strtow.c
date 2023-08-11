#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - count the number of words separated by spaces
 * @str: array of words
 * Return: Resulting array
*/

int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (isspace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}

		str++;
	}

	return (word_count);
}

/**
 * free_words - free allocated memory
 * @words: array of words
 * Return: Resulting array
*/

void free_words(char **words)
{
	int i;

	for (i = 0; words[i] != NULL; i++)
		free(words[i]);

	free(words);
}

/**
 * get_word - function get words
 * @str: array of words
 * @dest: the destination
 * @i: ith string
 * Return: word
*/
char **get_word(char *str, char **dest, int *i)
{
	int k, word_len, j = 0;

	for (k = 0; str[k] != '\0'; k++)
	{
		while (str[k] != '\0' && str[k] == ' ')
			k++;

		if (str[k] != '\0')
		{
			word_len = 0;
			while (str[k + word_len] != '\0' && str[k + word_len] != ' ')
				word_len++;

			dest[*i] = malloc((word_len + 1) * sizeof(char));
			if (dest[*i] == NULL)
			{
				free_words(dest);
				return (NULL);
			}

			for (j = 0; j < word_len; j++)
				dest[*i][j] = str[k + j];

			dest[*i][j] = '\0';
			k += word_len - 1;
		}
			(*i)++; /* move to next word */
	}

	return (dest);
}

/**
 * strtow - function that splits a string into words.
 * @str: array of words
 * Return: Resulting array
*/

char **strtow(char *str)
{
	int word_count = 0, i = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL || word_count == 0)
		return (NULL);

	words = get_word(str, words, &i);

	if (words == NULL)
		return (NULL);

	words[i] = NULL;
	return (words);
}
