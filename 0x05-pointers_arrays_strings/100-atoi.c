#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 * Return: Converted Number or 0 if there is no number.
 */
int _atoi(char *s)
{
	int i, num_out = 0;
	int sign = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] == '+')
			sign = sign * 1;
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	for (; *(s + i) != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num_out = (num_out * 10) + (s[i] - '0');
		else
			break;
	}
	return (sign * num_out);
}
