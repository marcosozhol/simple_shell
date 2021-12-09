#include "main.h"
/**
 *lectura - funcion para leer input
 *Return: char cadena
 */
char *lectura(void)
{
	char *cadena = NULL;
	int byte = 0;
	size_t size = 0;

	byte = getline(&cadena, &size, stdin);

	if (byte == -1)
	{
		free(cadena);
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("error");
			exit(EXIT_FAILURE);
		}
	}
	return (cadena);
}
