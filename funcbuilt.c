#include "main.h"
/**
 *exitb - exit
 *Return: 1
 *
 */
int exitb(void)
{
	return (2);
}

/**
 *env_s - our env function
 *Return: 0
 *
 */
int env_s(void)
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
	}
	return (0);
}
