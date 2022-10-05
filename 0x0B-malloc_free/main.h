#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void *mallloc(size_t size);
void free(void *ptr);
char *creat_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
