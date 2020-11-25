#include "holberton.h"

/**
 *_strcmp - function that compare if two strings are the same.
 *@str: The string to compare.
 *@str2: a string to compare.
 *Return: This function return 1 when they are the same and 0 otherwise.
 */

int _strcmp(char *str, char *str2)
{
	int a = 0;
	int lenStr = _strlen(str);
	int lenStr2 = _strlen(str);
	if (lenStr == lenStr2)
	{
		while (a < lenStr)
		{
			if (str[a] != str2[a])
				return (0);
			a++;
		}
		return (1);
	}
	return (0);
}
