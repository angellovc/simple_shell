#include "simple_shell.h"
/**
 *errors - print a error
 *@av: is a string.
 *@loop: is counter.
 *@error: is a identifier.
 *@token: is a string.
 */

void errors(char **av, size_t loop, int error, char **token)
{
	if (error == 1)
		print_error(av[0], loop, token, "not found\n");
;
	if (error == 2)
	{
		print_error(av[0], loop, token, "Permission danied\n");
		free_double(token);
		exit (126);
	}


}
