#include "main.h"
/**
  * main - Prints _putchar, followed by a new line.
  *
  * Return: 0 if Successfull else 1.
  */
int main(void)
{
	unsigned long int c;
	char txt[9] = {"_putchar\n"};

	for (c = 0; c < sizeof(txt); c++)
		_putchar(txt[c]);
	return (0);
}
