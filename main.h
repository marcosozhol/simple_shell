#ifndef HEADER_SHELL
#define HEADER_SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

char **tokeni(char *cadena, char *sep); /*funcion para tokenizar entrada*/
char *_strstr(char *str, char *str2); /*encuentra coincidencia*/
char _getpath(const char *name, char **env);
int _strcmp(char *s1, char *s2);
void eject(char **arr);
int checkbuilt(char **arr);
int exitb(void);
int env_s(void);
void _puts(char *str);
int _putchar(char c);

#endif
