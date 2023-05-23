#include "main.h"
/**
  * main - Entry Point
  *
  * Return: 0 on Success
  */
int main(void)
{
	char txt[9] = {"_putchar\n"};

	unsigned long int c;
	for (c = 0; c < sizeof(txt); c++)
		_putchar(txt[c]);
	return (0);
}
