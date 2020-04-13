#include "simple_shell.h"


void errors(char **av, size_t loop, int error, char **token)
{
	if (error == 1)
		print_error(av[0], loop, token, "not found\n");
;
	if (error == 2)
		perror ("cannod execute");

}
