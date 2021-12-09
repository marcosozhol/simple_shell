#ifndef HEADER_SHELL
#define HEADER_SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

char **tokeni(char *cadena, char *sep);
char *_strstr(char *str, char *str2);
char **_getpath(char *str);
int _strncmp(char *s1, char *s2, size_t n);
int _strcmp(char *s1, char *s2);
void eject(char **arr);
int checkbuilt(char **arr);
int exitb(void);
int env_s(void);
void _puts(char *str);
int _putchar(char c);
char *lectura(void);
char *testear(char *str);

#endif
