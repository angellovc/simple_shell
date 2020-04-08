#include "simple_shell.h"

pid_t pid_child_store(pid_t child, char *op)
{
	static pid_t child_saved = -1;
	if (comp_str(op, "store") == 1)
		child_saved = child;
	if (comp_str(op, "restore") == 1)
		child_saved = -1;
	if (comp_str(op, "get") == 1)
		return (child_saved);
	return (child_saved);
}
