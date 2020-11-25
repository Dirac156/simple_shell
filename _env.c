#include "holberton.h"

/**
 *_env - A function that helps the user to print the environment.
 *@argv : the arguments passed by the user.
 *Return: 1 when it's succeess full and 0 otherwise.
 */

int _env(char **argv)
{
	int i = 0;

	if (_strcmp(argv[0], "env") == 1)
	{
		for (; environ[i] != NULL; i++)
		{
			printf("%s\n", environ[i]);
		}
		return (1);
	}
	return (0);
}
