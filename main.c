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

while (1)
{
write(STDOUT_FILENO, "$ ", _strlen("$ "));
user_input = get_user_input(oldpwd, newpwd);
if (user_input[0] == '\n' || user_input[0] == '\0')
{
free(user_input);
continue;
}
else if (user_input != NULL)
{
tokens = tokenaization(user_input, oldpwd, newpwd);
_stat(tokens, oldpwd, newpwd);
}
}
return (0);
}