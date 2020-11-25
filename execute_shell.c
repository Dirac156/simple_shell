#include "holberton.h"

/**
 *execute_shell - a function that execute shell commands.
 *@args : the arguments passed by the user.
 *@command: the user command.
 */

void execute_shell(char **args, char *command)
{
	int status;
	pid_t pid;
	pid = fork();

	if (pid == 0)
	{
		if (execve(command, args, environ) == -1)
		{
			write(2, "command not found\n", 19);
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		write(2, "command not found\n", 19);
	}
	else
	{
		wait(&status);
	}
}
