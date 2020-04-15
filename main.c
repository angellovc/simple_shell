#include "simple_shell.h"
/**
 *main - execute a simple shell.
 *@ac: is number of argumens.
 *@argv: is arguments.
 *Return: 0
 */
int main(int __attribute__((unused))ac, char **argv)
{
	size_t error = 0, i = 0;
	char **arg;
	int status = 1;
	pid_t child = 1;

	signal(SIGTSTP, handler_sigstop);
	signal(SIGINT, handler_sigin);
	while (1)
	{
		if (child != 0)
		{
			i++;
			promp();
			arg = getarguments(argv, i);
			if (arg == '\0')
				continue;
			child = fork();
			pid_child_store(child, "store");
		}
		if (child == 0)
		{
			error = execute(arg);
			errors(argv, i, error, arg);
			free_double(arg);
			return (0);
		}
		waitpid(child, &status, 0);
		store_status(WEXITSTATUS(status), '+');
		store_path('\0', 'c');
		free_double(arg);
	}
	exit(store_status(0, '='));
}
