#include "holberton.h"

/**
 *get_user_input - gets user's input.
 *@old: the old directory passed as input.
 *@new: the memory allocation for the new path.
 *Return: The command from the user.
 */

char *get_user_input(char *old, char *new)
{
	size_t n = 0;
	char *buff;
	ssize_t returngetline = 0;

	(returngetline = getline(&buff, &n, stdin));
	if (returngetline == -1)
	{
		free(buff);
		free(old);
		free(new);
		write(STDOUT_FILENO, "\n", _strlen("\n"));
		exit(EXIT_SUCCESS);
	}
	else if (returngetline == 0)
	{
		free(buff);
		return ("\n");
	}
	return (buff);
}
