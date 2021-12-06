#include "main.h"
/**
 *_getpath - extrae el path
 *@name: nombre de la variable de entorno "path"
 *@env: variable de entorno
 *Return: contenido de la variable de entrono
 *
 */
char _getpath(const char *name, char **env)
{
	char *buff = NULL;
	char **path = NULL;
	char *str = NULL;
	char **carpetas; /*array para guardar carpetas del path*/
	int i = 0;

	char *dobstr = strdup(name);
	/*name = "PATH=";*/

	while (env[i] != NULL)
	{

		buff = strstr(env[i], dobstr);
		path = tokeni(buff, "=");
		str = path[1];
	}
	if (str == NULL)
	{
		return (-1);
	}
	else
	{
		carpetas = tokeni(str, ":");
	}
	return (**carpetas);
}
