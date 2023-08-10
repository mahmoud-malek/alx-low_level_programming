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
 * strtow - function that splits a string into words.
 * @str: array of words
 * Return: Resulting array
*/

char **strtow(char *str)
{
	int word_count = 0, i = 0;
	char **words = NULL;
	char *str_copy, *token;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL || word_count == 0)
	{
		free(str_copy);
		return (NULL);
	}

	token = strtok(str_copy, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);

		if (words[i] == NULL)
		{
			free_words(words);
			free(str_copy);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}
	words[i] = NULL;

	free(str_copy);
	return (words);
}
