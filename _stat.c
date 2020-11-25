#include "holberton.h"

/**
  *_stat - this function checks if a function is a bash function or a shell
  *function and excute it.
  *@args : the arguments passed by the user.
  *@old: the memory allocation for the old path.
  *@new: the memory allocation for the new path.
  */

void _stat(char **args, char *old, char *new)
{
char *command;

if (built_in_funcs(args, old, new) == -1)
{
command = change_argv(args[0]);

if (command != NULL)
execute_shell(args, command);

else
write(2, "command not found\n", 19);

free(command);
}
_free_double(args);
}
