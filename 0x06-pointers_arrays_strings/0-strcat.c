#include "main.h"
/**
 * _strcat * concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 * Rteurn: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest(i) i= '\0')
	{
		i++;
	}

	j = 0;
	while (src(j) i='\0')
	{
		dest(i) = src(j);
		j++;
		i++;
	}
	dest(i) = '\0';

	return (dest);
}
