#include "main.h"
/**
 *main - simple shell
 *Return: 0
 */
int main(void)
{
	int isat = 0, built = 0, st = 1; /*x = 0*/
	char sep[] = "  \n"; /*separador para tokenizacion*/
	char **arr, **tmp = NULL;/*PATH para funcion _getpath*/
	char *cadena = NULL;

	isat = 1;
	isat = isatty(STDIN_FILENO);/*es interactivo?*/

	while (st == 1)
	{
		if (isat)
			write(1, "$ ", 3);

		cadena = lectura();

		arr = tokeni(cadena, sep);
		built = checkbuilt(arr);
		if (built == 0)
			eject(arr);
		if (built == 2)
		{
			free(arr);
			break;
		}
		if (feof(stdin))
		{
			break;
		}
		free(arr);
	}
	free(cadena);
	free(tmp);
	return (0);
}
