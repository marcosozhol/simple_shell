 #include "main.h"
/**
*_strncmp - Funcion que compara dos cadenas
*@s1: cadena1
*@s2: cadena2
*@n: cantidad de bites a comparar
*Return: 0
*/

int _strncmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
return (s1[i] - s2[i]);
}
