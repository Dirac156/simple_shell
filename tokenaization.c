#include "holberton.h"

/**
 *tokenaization - split a sentence into multiple words.
 *@str: the string passed as argument.
 *@old: the memory allocation for the old path.
 *@new: the memory allocation for the new path.
 *Return: pointer holding words.
 */
char **tokenaization(char *str, char *old, char *new)
{
	int i = 0;
	const char s[2] = " \n";
	int len_str = _strlen(str);
	char **tokens = (char **)malloc(sizeof(char *) * (len_str));
	char *token;
	if (!tokens)
	{
		write(2, "Cannot allocate memory", 22);
		free(old);
		free(new);
		exit(EXIT_FAILURE);
	}
	token = strtok(str, s);
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, s);
		i++;
	}
	tokens[i] = NULL;
	if (_strcmp(tokens[0], "exit") == 1)
		_exits(tokens, old, new);
	return (tokens);
}
