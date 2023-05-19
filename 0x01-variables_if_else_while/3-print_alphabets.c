#include <stdio.h>
/**
  * main - prints the alphabet in lowercase,
  * and then in uppercase, followed by a new line.
  *
  * Return: 0 if success and 1 otherwise
  */

int main(void)
{

	int i, c;
	char alphabets_lower[] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	for (; i < 26; i++)
		putchar(alphabets_lower[i]);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
