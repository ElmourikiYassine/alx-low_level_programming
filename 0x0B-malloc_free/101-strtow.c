#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings, or NULL if it fails.
 */

int count_words(char *str);
char **handle_words(char *str, char **words, int words_position);

char **strtow(char *str)
{
	char **words = (char **) malloc((count_words(str) + 1) * sizeof(char *));

	if (count_words(str) == 0)
		return (NULL);

	return (handle_words(str, words, 0));
}

/**
 * handle_words - Collecting "*word" and
 * pushing them to "**words" (pointer to pointer to char)
 * or (an array to pointers)
 *
 * @str: The string to split.
 * @words: the array of pointers.
 * @words_position: the position needed to push to words.
 *
 * Return: A pointer to an array of strings, or NULL if it fails.
 */

char **handle_words(char *str, char **words, int words_position)
{
	int i;
	char *word;
	char *s = str;
	int size = 0;

	if (*str == '\0')
	{
		words[words_position] = NULL;
		return (words);
	}
	if (*str == ' ')
	{
		s++;
		return (handle_words(s, words, words_position));
	}

	if (*str != ' ')
	{
		for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
			size++;
		word = (char *) malloc(size + 1);
		for (i = 0; i < size && s[i] != '\0'; i++)
			word[i] = s[i];
		words[words_position] = word;
		return (handle_words(&str[size], words, ++words_position));
	}
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0;
	char *s = str;

	while (*s != '\0')
	{
		if (*s != ' ')
		{
			count++;
			while (*s != ' ' && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

