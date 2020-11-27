#include "holberton.h"

/**
 * _strlen_space - check the code for Holberton School students.
 * @s: variable.
 *
 *Return: the lenght of the string
 */
int _strlen_space(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
      j++;
	}
	return (j);
}
