#include "holberton.h"

/**
 * main - starting point of the shell.
 *Return: 0
 */

int main(void)
{
	char *user_input;
	char **tokens;
	char *oldpwd = (char *)malloc(sizeof(char) * 1024);
	char *newpwd = (char *)malloc(sizeof(char) * 1024);

	if (!oldpwd || !newpwd)
		return (0);


	user_input = get_user_input(oldpwd, newpwd);
	if (user_input && (user_input[0] == '\n' || user_input[0] == '\0'))
	{
		;
	}
	else if (user_input != NULL)
	{
		tokens = tokenaization(user_input, oldpwd, newpwd);
		if (tokens != NULL)
		{
		_stat(tokens, oldpwd, newpwd);
		}
	}
	return (0);
}
