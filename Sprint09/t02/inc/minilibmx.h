#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdbool.h>
#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printint(int n);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char*s);

#endif