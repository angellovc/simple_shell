#include "simple_shell.h"
/**
 *store_status - save the status
 *@op: + add new status, - restore status, = return saved status
 *@status: status to store
 *Return: saved status
 */
int store_status(int status, char op)
{
	static int new_status;


	if (op == '+')
		new_status = status;
	else if (op == '-')
		new_status = 0;
	else if (op == '=')
		return (new_status);
	return (0);
}
