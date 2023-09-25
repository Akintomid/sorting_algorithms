#include "sort.h"

/**
 *bubble_sort - sorts an array of integers in ascending orde
 *@array: the array to be sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int n;

	if (size < 2)
		return;
	for (b = 0; b < size - 1; b++)
	{
		for (a = 0; a < size - b - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				n = array[a];
				array[a] = array[a + 1];
				array[a + 1] = n;
				print_array(array, size);
			}
		}
	}
}
