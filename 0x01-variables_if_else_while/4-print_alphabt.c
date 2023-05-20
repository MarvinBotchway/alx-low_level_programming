#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase, followed by a new line.
  *
  * Return: 0 if Successful 1 if thers an error
  */

int main(void)
{

	int i;
	char alphabets_lower[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alphabets_lower[i] != 'q' && alphabets_lower[i] != 'e')
			putchar(alphabets_lower[i]);
	}
	putchar('\n');
	return (0);


}
