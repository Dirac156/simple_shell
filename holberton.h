#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
extern char **environ;

/**
  * struct built_in - A new struct type defining built in functions.
  * @command: A symbol representing the built in function.
  * @execute: A function to execute when someone uses a built in function.
  */

typedef struct built_in
{
char *command;
int (*execute)();
} built_in;

char *get_user_input();
char **tokenaization(char *str, char *old, char *new);
void _stat(char **args, char *, char *);
void execute_shell(char **args, char *command);
char *change_argv(char *argv);
int built_in_funcs(char **argv, char *, char *);

void _free_double(char **tokens);
int _strlen(char *s);
int _strcmp(char *str, char *str2);
void swappwd(char *str, char *str2);
void clean_memory(char *pwd);
void fill_memory(char *str, char *empty);
void change_directory(char *str, char *old);
char *_strappend(char *str, char *str2, char *dest);
char *_putchar(char);

ssize_t _getline(char **buff, size_t *n, FILE *stream);
int _exits(char **args, char *old, char *new);
int _env(char **argv);
int _cd(char **args, char *old, char *new);

#endif
