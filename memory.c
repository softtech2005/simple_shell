#include "shell.h"

/**
 * bfree - free a pointer and NULLs the address
 * @ptr: address of the pointers to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
