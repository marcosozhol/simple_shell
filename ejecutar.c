#include "main.h"
/**
 *eject - Execute a comand
 *@arr: array of command and arguments
 *Return: 0
 */
void eject(char **arr)
{
	int ejecucion;
	pid_t subproceso;

	subproceso = fork();

	if (subproceso == -1)
	{
		perror("Error");
		exit(-1);
	}
	if (subproceso == 0)
	{
		ejecucion = execve(arr[0], arr, NULL);

		if (ejecucion == -1)
		{
			perror("Error");
		}
		exit(0);
	}
	else
	{
		wait(NULL);
	}


}
