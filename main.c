#include <stdlib.h>
#include "simple_shell.h"
#include <sys/types.h>
#include <sys/wait.h>
/**
 *main - execute a simple shell.
 *@ac: is number of argumens.
 *@av: is arguments.
 *Return: 0
 */
int main(int __attribute__((unused))ac, char **av)
{
	size_t size = 1024, error = 0, i = 0;
	char *string, **arg, *path;
	int status = 1;
	pid_t child = 1;

	signal(SIGTSTP, handler_sigstop);
	signal(SIGINT, handler_sigin);
	while (1)
	{
		if (child != 0)
		{
			i++;
			string = char_malloc(sizeof(char) * size);
			if (isatty(STDIN_FILENO) == 1)
				promp();
			arg = getarguments(string, size, status);
			path = find(arg);
			if (path == '\0')
			{
				errors(av, i, 1, arg);
				free_double_single(arg, string);
				status = 127;
				continue;
			}
			child = fork();
			pid_child_store(child, "store");
		}
		if (child == 0)
		{
			error = execute(arg, path);
			errors(av, i, error, arg);
			free_double_single(arg, string);
			free(path);
			return (0);
		}
		waitpid(child, &status, 0);
		free_double_single(arg, string);
		free(path);
	}
	exit(status);
}
