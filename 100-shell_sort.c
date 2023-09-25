#include "sort.h"
/**
 * shell_sort -Sort an array using shell_sort algorithm
 * @array: array
 * @size: size of the array
 * Return: NULL
 **/
void shell_sort(int *array, size_t size)
{
	unsigned int gap = 1, y, x;
	int temp;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (y = gap; y < size; y++)
		{
			temp = array[y];
			x = y;
			while (x >= gap && array[x - gap] > temp)
			{
				array[x] = array[x - gap];
				x -= gap;
			}
			array[x] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
