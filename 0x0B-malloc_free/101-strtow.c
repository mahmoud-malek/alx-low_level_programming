#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - function that splits a string into words.
 * @str: array of words
 * Return: Resulting array
*/

int count_words(char *str)
{
	unsigned int i, cnt_words = 0;

	for (i = 0; i < strlen(str); i++)
	{
		/* skipping spaces */
		while (str[i] != '\0' && str[i] == ' ')
			i++;

		/* walk through the word */
		if (str[i] != '\0')
		{
			cnt_words++;

			while (str[i] != '\0' && str[i] != ' ')
				i++;
		}
	}

	return (cnt_words);
}

/**
 * free_arr - function that splits a string into words.
 * @array: array of words
 * @n: size
 * Return: Resulting array
*/

void free_arr(char **array, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		free(array[i]);
	}

	free(array);
}

/**
 * strtow - function that splits a string into words.
 * @str: array of words
 * Return: Resulting array
*/

char **strtow(char *str)
{
	unsigned int i, j, k, cnt_words = count_words(str), word_len = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	/* Allocating memory for words */
	words = malloc((cnt_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;

	for (k = 0; str[k] != '\0'; k++)
	{
		while (str[k] != '\0' && str[k] == ' ')
			k++;
		/* count number of chars in word */
		if (str[k] != '\0')
		{
			word_len = 0;
			while (str[k + word_len] != '\0' && str[k + word_len] != ' ')
				word_len++;
			/* Allocate memory for the chars in the word */
			words[i] = malloc((word_len + 1) * sizeof(char));

			if (words[i] == NULL)
			{
				free_arr(words, i);
				return (NULL);
			}
			for (j = 0; j < word_len; j++)
				words[i][j] = str[k + j];
			words[i][j] = '\0';
			i++; /* move to next word */
			k += word_len - 1;
		}
	}
	words[i] = NULL;
	return (words);
}

