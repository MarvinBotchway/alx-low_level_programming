#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of arguments + name of file.
 * @av: Pointer to pointer to value of arguments.
 * Return: A pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, c, s;

	s = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s++;
		}
		s++;
	}

	ptr = malloc(sizeof(char) * s);
	if (ptr == NULL)
	{
		printf("Unable to allocate memory.");
		return (NULL);
	}

	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[c] = av[i][j];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
