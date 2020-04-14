#include "simple_shell.h"
/**
 *handler_sigin - take signal.
 *@signum: is a signal.
 */
void handler_sigin(int __attribute__((unused))signum)
{
	putchar('\n');
	if (pid_child_store(0, "get") == -1)
		promp();
	fflush(stdout);
}
