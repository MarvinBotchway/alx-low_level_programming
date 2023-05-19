#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase, followed by a new line.
  *
  * Return:  0 if Successfull 1 if there is an error
  */
int main(void)
{
	int i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	for (; i < 26; i++)
		putchar(alphabets[i]);
	putchar('\n');
	return (0);
}
