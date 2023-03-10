#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concanate twoo string
 * @s1: first string
 * @s2: second string
 * Return: NULL or POinter
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *newStr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	newStr = (char *)malloc((i + j + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		newStr[k] = s1[k];

	for (k = 0; s2[k] != '\0'; k++)
		newStr[k + i] = s2[k];

	return (newStr);
}
