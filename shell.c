#include "main.h"
/**
 *main - simple shell
 *@argc: count of arguments
 *@argv: vector of arguments
 *@env: enviroment var
 *Return: 0
 */
int main(int argc, char **argv, char **env)
{
	int byte, isat;
	size_t size = 10;
	char sep[] = "  \n";
	char **arr, /***carpetas_path,*/ *cadena = NULL;
	(void)argc;
	(void)argv;
	(void)env;

	isat = 1;
	/**
	 * carpetas_path = malloc(1024);
	 *carpetas_path = _getpath("PATH=", env);
	 */

	isat = isatty(STDIN_FILENO);/*es interactivo?*/

	while (1)
	{
		if (isat)
			printf("$ ");
		byte = getline(&cadena, &size, stdin);

		if (byte == -1)
		{
			putchar('\n');
			free(cadena);
			return (-1);
		}

		arr = tokeni(cadena, sep);
		/**
		 * funcion de chequear si es un built-in
		 */

		eject(arr);

		if (feof(stdin))
		{
			break;
		}
	}
	free(cadena);
	free(arr);
	return (0);
}
