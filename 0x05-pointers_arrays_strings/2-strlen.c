/**
 * _strlen - Finds the length of a string.
 * @s: The input string.
 *
 * Return: (int) Length of string s.
 */

int _strlen(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	while (*(s + len) != '\0')
		len++;
	return (len);
}
