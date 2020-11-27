#include "holberton.h"

/**
 *_exits - A function that helps the user to close the shell.
 *@args : the arguments passed by the user.
 *@old: the old memory allocation.
 *@new: the new memory allocation.
 *Return: status when it's succeessfull and 0 when otherwise.
 */

int _exits(char **args, char *old, char *new)
{
	int i;

	free(old);
	free(new);
	if (args[1] == NULL)
	{
		_free_double(args);
		exit(EXIT_SUCCESS);
	}
	else
	{
		i = atoi(args[1]);
		_free_double(args);
		exit(i);
	}
	return (0);
}
