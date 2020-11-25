#include "holberton.h"

/**
 *_free_double - free the first index and the remainings.
 *@tokens: the memory to free.
 */

void _free_double(char **tokens)
{
	free(tokens[0]);
	free(tokens);
}
