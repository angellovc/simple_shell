#include "simple_shell.h"

void sighandler(int __attribute__((unused))signum)
{
	putchar('\n');
        if (pid_child_store(0, "get") == -1)
		promp();
	fflush(stdout);
}
