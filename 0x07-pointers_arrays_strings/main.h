#ifndef MAIN_H
#define MAIN.H

/**
 * File : main.h
 * Auth ryan tech
 * description headear file with prototype for functions
 * used in 0x07 tasks
 */

#include <stdef.h>

int_putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char {*a)[8]);
void print_diagums(int *a, int size);
void set_string(char **s, char *to);

#endif
