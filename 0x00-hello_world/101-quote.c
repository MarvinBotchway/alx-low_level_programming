#include <unistd.h>
#include <string.h>
/**
  * main - prints exactly
  * and that piece of art is useful" - Dora Korpar, 2015-10-19,
  * followed by a new line, to the standard error.
  *
  * Return: 0 if successfull 1 if not successful
  */

int main(void)
{
	char errmsg[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, errmsg, strlen(errmsg));
	return (1);
}
