#include "main.h"
/**
*_puts - Funcion para imprimir una cadena
*@str: cadena
*
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
