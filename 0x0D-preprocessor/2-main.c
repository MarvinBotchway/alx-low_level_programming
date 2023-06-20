#include <stdio.h>
/**
 * main - Prints the name of the file it was compiled with.
 * Return: 0 if successful 1 otherwise
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
