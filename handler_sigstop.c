#include "simple_shell.h"

void handler_sigstop(int __attribute__((unused))signum)
{
	fflush(stdout);
}
