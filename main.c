#include <stdlib.h>
#include "simple_shell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>


int main(void)
{
	size_t size = 1024;
	char *string, **arg;
	int status;
	pid_t child = 1;

	signal(SIGINT, sighandler);
	while (1)
	{
		string = char_malloc(sizeof(char) * size);
		promp();
		arg = getarguments(string, size);
		child = fork();
		if (child != 0)
			pid_child_store(child, "store");
		if (child == 0)
		{
			execute(arg, string);
			free(string);
			return(0);
		}
		wait(&status);
		free_double_single(arg, string);
	}
	return 0;
}
