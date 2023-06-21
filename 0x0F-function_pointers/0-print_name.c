/**
 * print_name - Prints a name by putting
 * different functions together.
 * @name: Pointer to the name to print.
 * @f: Pointer to a function that takes a string
 * to print it.
 * Return: (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
