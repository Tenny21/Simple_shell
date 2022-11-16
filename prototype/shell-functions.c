#include "shell.h"

/**
 * _getline - Get's command from stdin
 *
 * @buff: buffer to receive input
 * @n: Numbrr of bytes or char
 *
 * Return: Number of char received
 */

ssize_t _getline(char **buff, size_t *n)
{
	size_t size;
	ssize_t read;

	size = n;

	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	read = getline(buff, &size, stdin);
	if (read == -1)
	{
		free(buff);
		return (0);
	}

	return (read);
}

/**
