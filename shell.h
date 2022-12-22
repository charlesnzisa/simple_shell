#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

extern char **environ;

/*line_get.c*/
char *line_get();
ssize_t _getline(char **ptr, size_t n, FILE *stream);

/*tokenize.c*/
char **tokenize(char *buf);
char *_strtok(char *str, const char *delim);

/*exec.c*/
void check_str(char *buf, char **token);
void execute(char *buf, char **token);
void check_access(char **token);

/*env.c*/
char **copy_env(void);
void print_env(void);

#endif /*MAIN_H*/
