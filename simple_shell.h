#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/* static variable*/
extern char **environ;
/* print function */
int _putchar(char c);
size_t _puts(char *str);
/* errors */
int sterr(char *str);
void errors(char **av, size_t loop, int error, char **token);
void print_error(char *s, size_t s1, char **token, char *s2);
size_t perror_number(size_t n);
/* string manage */
char *copy_string(char *string);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void promp(void);
int comp_str(char *str1, char *str2);
size_t double_strlen(char **str);
/* signals manage */
void handler_sigin(int signum);
void handler_sigstop(int signum);
pid_t pid_child_store(pid_t child, char *op);
/* counters */
size_t counter(char op);
/* commands */
int getcommand(char *string, size_t size);
ssize_t _getline(char **line, size_t *n, FILE *stream);
char **getarguments(char *string, size_t size);
char **split_string(char *string, char *delim);
/* Dynamic memory */
void free_double_single(char **d, char *s);
char *char_malloc(size_t size);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
char **malloc_strtok(char *string, char delimit, char *funct);
/* execute */
int execute(char **token, char *string);
char *_getenvi(char *name);
char *_getenv(const char *name);
int len_pat(char *string, char delimit);
char **fill_strtok(char *string, char delimit, char *funct);
char *get_path(char *funct);


#endif
