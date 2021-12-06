#include "main.h"
/**
 *checkbuilt - check if is a built
 *@arr: array of command
 *Return: a integer
 */
int checkbuilt(char **arr)
{
	char *builts[] = {"env", "exit", NULL};
	int i = 0;

	for (i = 0; builts[i] != NULL; i++)
	{
		if (_strcmp(builts[i], arr[0]) == 0)
		{
			break;
		}
	}
	switch (i)
	{
		case 0:
			printf("hacer funcion env");
			return (1);
			break;

		case 1:
			printf("hacer funcion exit");
			return (1);
			break;

		default:
			return (0);
			break;
	}
}
