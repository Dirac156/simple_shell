#include "holberton.h"

/**
 *_cd - change directories.
 *@args: the arguments passed by the user.
 *@oldpwd: the previous directory.
 *@newpwd: the new directory where we want to move to.
 *Return: 1 on successs.
 */

int _cd(char **args, char *oldpwd, char *newpwd)
{
	char pwd[1024];
	char *homedir = getenv("HOME");

	if (_strcmp(args[0], "cd") == 1 && args[1] == NULL)
	{
		change_directory(homedir, oldpwd);
	}
	else if (*(args[1]) == '-' && args[2] == NULL)
	{
		if (oldpwd[0] != '\0')
		{
			swappwd(oldpwd, newpwd);
			getcwd(pwd, sizeof(pwd));
			swappwd(pwd, oldpwd);
			chdir(newpwd);
			printf("%s\n", newpwd);
			clean_memory(newpwd);
		}
		else
			write(2, "sh: cd: OLDPWD not set\n", 24);
	}
	else if (*(args[1]) == '-' && args[2] != NULL)
		write(2, "sh : cd : too many arguments\n", 30);

	else
	{
		change_directory(args[1], oldpwd);
	}
	return (1);
}

/**
 *swappwd - swap two path
 *@oldpwd: the previous pwd
 *@newpwd: the new pwd
 */

void swappwd(char *oldpwd, char *newpwd)
{
	int i;

	if (newpwd[0] == '\0')
	{
		for (i = 0; oldpwd[i] != '\0'; i++)
		{
			newpwd[i] = oldpwd[i];
		}
		for (i = 0; oldpwd[i] != '\0'; i++)
			oldpwd[i] = '\0';
	}
}

/**
 *clean_memory - function that fill every char with null terminator.
 *@pwd: the memory we want to clean
 */

void clean_memory(char *pwd)
{
	int i;
	for (i = 0; pwd[i] != '\0'; i++)
		pwd[i] = '\0';
}

/**
 *fill_memory - function that copy working directory path to another memory.
 *@str: the path.
 *@empty : the memory to fill.
 */

void fill_memory(char *str, char *empty)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		empty[i] = str[i];
}

/**
 *change_directory - function that changes the working directory.
 *@str: the path to the new directory.
 *@oldpwd: the path to the previous directory.
 */

void change_directory(char *str, char *oldpwd)
{
	char pwd[1024];

	getcwd(pwd, sizeof(pwd));
	if (oldpwd[0] != '\0')
		clean_memory(oldpwd);

	fill_memory(pwd, oldpwd);

	if (chdir(str) != 0)
		perror("sh");
}
