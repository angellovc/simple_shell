#ifndef VARIABLE_MANAGE_H
#define VARIABLE_MANAGE_H

#include <stdlib.h>
#include <unistd.h>

/* setenv */
char **malloc_environ(char **environ, size_t size);
char **realloc_environ(char **environ, size_t new_size);
char **copy_double(char **old, char **new);
size_t overwrite_after(char *delimiter, char *str, char *dest);
char *write_variable(const char *name, const char *value, char *dest);
int comp_string(char *str1, const char *str2);
int _setenv(const char *name, const char *value);
char **malloc_double(size_t size);
int _unsetenv(const char *name);

/* unsetenv */
size_t double_strlen(char **str);
char **free_env_var(char **env, size_t position, size_t env_size);



#endif
