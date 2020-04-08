#include "simple_shell.h"

void promp(void)
{
	char *user, *pwd;

	user = getenv("USER");
	pwd = getenv("PWD");
	printf("%s@Cisfun:%s$ ", user, pwd);
}
