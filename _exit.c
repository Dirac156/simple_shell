#include "holberton.h"

/**
  *_exits - A function that helps the user to close the shell.
  *@args : the arguments passed by the user.
  *@old: the old memory allocation.
  *@new: the new memory allocation.
  *Return: status when it's succeess full and 0 otherwise.
  */

int _exits(char **args, char *old, char *new)
{
free(old);
free(new);
_free_double(args);
exit(EXIT_SUCCESS);
return (0);
}
