#include "simple_shell.h"
/**
 *handler_sigstop - take a signal from command line.
 *@signum: signal.
 */
void handler_sigstop(int __attribute__((unused))signum)
{
	fflush(stdout);
}
