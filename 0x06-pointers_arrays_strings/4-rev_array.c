#include "main.h"
/**
 * reverse_array - Reverses the elements of an array of ints.
 * @a: The array of integers
 * @n: Number of elements
 * Return: void;
 */
void reverse_array(int *a, int n)
{
	int i, num1, num2;

	num1 = 0;
	num2 = 0;
	for (i = 0; i < n; i++)
	{
		n--; /* i starts from 0 so must reduce n everytime loop runs */
		num1 = a[i];
		num2 = a[n];
		a[i] = num2;
		a[n] = num1;
	}
}
