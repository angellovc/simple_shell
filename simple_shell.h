#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/* print function */
int _putchar(char c);
size_t _puts(char *str);

/* string manage */
char *copy_string(char *string);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void promp(void);
int comp_str(char *str1, char *str2);
size_t double_strlen(char **str);
/* signals manage */
void sighandler(int signum);
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
/* execute */
void execute(char **token, char *string);

#endif
