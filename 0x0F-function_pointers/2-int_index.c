/**
 * int_index - Searches for an integer
 * by using other functions.
 *
 * @array: The array to search through.
 * @size: The number of elements in array.
 * @cmp: A Pointer to the function to compares
 * the elements in the array to some numbers.
 *
 * Return: The index of the first element
 * for which the cmp function does not return 0
 * If no element matches, returns -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			break;
	if (i == size)
		return (-1);

	return (i);
}
