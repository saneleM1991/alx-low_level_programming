#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First String
 * @s2: Second string
 * @n: Number of byte to copy from s2
 * Return: Pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len, s2_len;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	new_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		new_str[i] = s1[i];

	if (n >= s2_len)
	{
		for (j = 0; i < (s1_len + s2_len + 1); i++, j++)
			new_str[i] = s2[j];
	}
	else
	{
		for (j = 0; j <= n; i++, j++)
			new_str[i] = s2[j];
		new_str[i] = '\0';
	}
	return (new_str);
}
