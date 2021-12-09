#include "main.h"
/**
 *main - simple shell
 *Return: 0
 */
int main(void)
{
	int byte = 0, isat = 0, built = 0, st = 1; /*x = 0*/
	size_t size = 10;
	char sep[] = "  \n"; /*separador para tokenizacion*/
	char **arr, *cadena = NULL, **tmp = NULL;/*PATH para funcion _getpath*/

	isat = 1;
	isat = isatty(STDIN_FILENO);/*es interactivo?*/

	while (st == 1)
	{
		if (isat)
			_puts("$ ");

		byte = getline(&cadena, &size, stdin);

		if (byte == -1)
		{
			_putchar('\n');
			free(cadena);
			return (-1);
		}
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
