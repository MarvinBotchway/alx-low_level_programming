#include <stdlib.h>
/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: Pointer to the array which would have its elements
 * passed to the function.
 * @size: The size of the array.
 * @action: The pointer to the function to call.
 * Return: (void).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
