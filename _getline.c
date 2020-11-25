#include "holberton.h"

/**
 *_getline - A function that read inputs from the stdin
 *@buff: the memory for our user_input.
 *@n : the number of character.
 *@stream: the file where to read.
 *Return: 0 if the file was empty, -1 when we reached the EOF without getting
 *any character or the number of character reads from the user.
 */
ssize_t _getline(char **buff, size_t *n, FILE *stream)
{
	char char_read[1024];
	n = 0;
	ssize_t i = 0;
	(void)stream;
	(void)n;

	buff = (char **)malloc(sizeof(char *) * 1024);
	if (!buff)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	scanf("%s", char_read);
	if (char_read[0] != EOF || char_read[0] != '\n')
	{
		buff[i] = char_read;
		i++;
	}
	if (i > 0)
		return (i);
	else if (i == 0 && char_read[0] == '\n')
		return (i);
	return (-1);
}
