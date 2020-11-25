# 0x16. C - Simple Shell
Shell is a command line interpreter that enables us to access an Operating system's services in that it interprets commands from the user so that the OS can understand them and perform the appropriate functions.

## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Setup](#setup)

## General info
This project is about building a simple basic shell program.

## Technologies
The project is created with:
* C programming language

## Setup
To run this project, install shell locally:

```

$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
$ ./hsh

```

## Illustration
![Shell program](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.wikihow.com%2FWrite-a-Shell-Script-Using-Bash-Shell-in-Ubuntu&psig=AOvVaw10BiPbSuhHxdsR3gCiKz37&ust=1606277971916000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCOCzjqOqmu0CFQAAAAAdAAAAABAD)

## Code examples
To get user input: `char *get_user_input()
{
size_t n = 0;
char *buff;
ssize_t returngetline = 0;

returngetline = getline(&buff, &n, stdin);
if (returngetline == -1)
{
free(buff);
fprintf(stdout, "\n");
exit(EXIT_SUCCESS);
}`

## Features
* Gets user input
* Tokenizes a function
* Parses a function
* Executes the whole process

  * change working directory
  * Print the environment
  * List all files in a directory
  * exit the Shell
  * ...

## Status
Development of the project is complete

## Inspiration
This shell program is based on the Holberton School program.
