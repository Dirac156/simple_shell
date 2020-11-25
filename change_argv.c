#include "holberton.h"

/**
 *change_argv - modify the command gave by the user and add /bin/.
 *@argv : Arguments passed by the user.
 *Return: on success it returns the command with /bin/ at the beginning.
 */

char *change_argv(char *argv)
{
	struct stat st;
	char *token, *buff, *buff2, *newpath;
	char *path = getenv("PATH");

	if (stat(argv, &st) == 0)
		return (argv);

	newpath = malloc(sizeof(char) * _strlen(path));
	if (!newpath)
		return (NULL);

	newpath = _strappend(path, "", newpath);
	token = strtok(newpath, ":");

	buff = malloc(sizeof(path) * _strlen(path));
	buff2 = malloc(sizeof(path) * _strlen(token) + sizeof(argv) + 1);
	if (!buff || !buff2)
		return (NULL);

	while (token != NULL)
	{
		token = _strappend(token, "/", buff);
		token = _strappend(token, argv, buff2);

		if (stat(token, &st) == 0)
		{
			free(newpath);
			free(buff);
			return (token);
		}
		token = strtok(NULL, ":");
	}
	free(buff2);
	free(buff);
	return (NULL);
}

/**
 *_strappend - function that adds one strings to another.
 *@str: the first string to add to the menory.
 *@str2: the second string to add.
 *@dest: the destination memory.
 *Return: the new destination.
 */

char *_strappend(char *str, char *str2, char *dest)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		dest[i] = str2[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
