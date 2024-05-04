#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	int i, index = (int)size;
	int tmp, swap, flag = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < index - 1; i++)
	{
		tmp = i;
		for (flag = i + 1; flag < index; flag++)
		{
			if (array[tmp] > array[flag])
			{
				tmp = flag;
			}
		}
		if (tmp != i)
		{
			swap = array[i];
			array[i] = array[tmp];
			array[tmp] = swap;
			print_array(array, size);
		}
	}
}
