#include "simple_shell.h"

void print_error(char *s, size_t s1, char **token, char *s2)
{
	sterr(s);
	sterr(": ");
	perror_number(s1);
	sterr(": ");
	sterr(token[0]);
	sterr(": ");
	sterr(s2);
}
