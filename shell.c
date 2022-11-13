#include "shell.h"

/**
 * main - Main shell loop
 *
 * @argc: Args count
 * @argv: args v3ctor
 *
 * Return: 0 for succ3ss
 */

int main(int argc, char *argv[])
{
	int i, num, inf;
	char *token;

	inf = 4;
	
	while (inf)
	{
		prompt();
		getline();
		token = strtok();
		pid = fork();
		if (pid = 0)
		{
			execve();
		}
		else
			wait();
	}
	return (0)
}
