/**
 * swap_int - Swaps the values of two integers.
 * @a: First int to be swaped with the other.
 * @b: Second int to be swape with the other.
 *
 * Return: (void).
 */

void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;

	*a = n;
	*b = m;
}
