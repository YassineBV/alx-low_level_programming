#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str);
char *_memset(char *s, char b, unsigned int n);
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
